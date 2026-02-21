// Climate Station Analysis System
#include <stdio.h>
#include <string.h>
#include <math.h>

#define MAX_STATIONS 100
#define MAX_DAYS 30

// ---------------- STRUCTURES ----------------

typedef struct {
    float skyView;
    float vegetation;
    float population;
    float pervious;
    float impervious;
    char status[10];   // urban / rural
} UrbanParam;

typedef struct {
    float temperature[MAX_DAYS];
    float humidity[MAX_DAYS];
} WeatherParam;

typedef struct {
    char name[30];
    UrbanParam urban;
    WeatherParam weather;
    float distance[MAX_STATIONS];
} Station;

Station stations[MAX_STATIONS];
int stationCount = 0;

// ---------------- ADD STATION ----------------

void addStation() {

    if(stationCount >= MAX_STATIONS) {
        printf("Limit Reached!\n");
        return;
    }

    printf("Enter Station Name: ");
    scanf("%s", stations[stationCount].name);

    printf("SkyView Vegetation Population Pervious Impervious: ");
    scanf("%f %f %f %f %f",
          &stations[stationCount].urban.skyView,
          &stations[stationCount].urban.vegetation,
          &stations[stationCount].urban.population,
          &stations[stationCount].urban.pervious,
          &stations[stationCount].urban.impervious);

    printf("Status (urban/rural): ");
    scanf("%s", stations[stationCount].urban.status);

    printf("Enter 30 days Temperature & Humidity:\n");

    for(int i=0;i<MAX_DAYS;i++) {
        printf("Day %d (Temp Humidity): ", i+1);
        scanf("%f %f",
              &stations[stationCount].weather.temperature[i],
              &stations[stationCount].weather.humidity[i]);
    }

    // Input distance matrix row
    for(int i=0;i<stationCount;i++) {
        printf("Distance to %s: ", stations[i].name);
        scanf("%f", &stations[stationCount].distance[i]);
        stations[i].distance[stationCount] =
        stations[stationCount].distance[i];
    }

    stations[stationCount].distance[stationCount] = 0;

    stationCount++;
    printf("Station Added Successfully!\n");
}

// ---------------- CITY AVERAGE TEMP ----------------

float cityAverageTemp() {

    float total = 0;
    int count = 0;

    for(int i=0;i<stationCount;i++)
        for(int j=0;j<MAX_DAYS;j++) {
            total += stations[i].weather.temperature[j];
            count++;
        }

    return total/count;
}

// ---------------- QUERY 1 ----------------

void highestHeatDegreeDays() {

    float avg = cityAverageTemp();
    int maxDays = -1;
    char best[30];

    for(int i=0;i<stationCount;i++) {

        int count=0;

        for(int j=0;j<MAX_DAYS;j++)
            if(stations[i].weather.temperature[j] > avg)
                count++;

        if(count > maxDays) {
            maxDays = count;
            strcpy(best, stations[i].name);
        }
    }

    printf("Highest Heat Degree Days: %s (%d days)\n",
           best, maxDays);
}

// ---------------- QUERY 2 ----------------

void thermallyComfortableDays() {

    for(int i=0;i<stationCount;i++) {

        if(strcmp(stations[i].urban.status,"urban")!=0)
            continue;

        int nearest=-1;
        float minDist=9999;

        for(int j=0;j<stationCount;j++)
            if(strcmp(stations[j].urban.status,"rural")==0 &&
               stations[i].distance[j] < minDist) {
                minDist = stations[i].distance[j];
                nearest = j;
            }

        if(nearest==-1) continue;

        float minDiff=9999;
        int bestDay=-1;

        for(int d=0; d<MAX_DAYS; d++) {

            float diff = fabs(
                stations[i].weather.temperature[d] -
                stations[nearest].weather.temperature[d]);

            if(diff < minDiff) {
                minDiff = diff;
                bestDay = d;
            }
        }

        printf("%s Comfortable Day: Day %d\n",
               stations[i].name, bestDay+1);
    }
}

// ---------------- QUERY 3 ----------------

void decreasingVegetationHighTemp() {

    float avg = cityAverageTemp();

    int order[MAX_STATIONS];

    for(int i=0;i<stationCount;i++)
        order[i]=i;

    // sort by vegetation decreasing (index based)
    for(int i=0;i<stationCount-1;i++)
    for(int j=i+1;j<stationCount;j++)
    if(stations[order[i]].urban.vegetation <
       stations[order[j]].urban.vegetation) {

        int t = order[i];
        order[i] = order[j];
        order[j] = t;
    }

    for(int i=0;i<stationCount;i++) {

        int idx = order[i];
        printf("Station %s:\n", stations[idx].name);

        for(int d=0; d<MAX_DAYS; d++)
            if(stations[idx].weather.temperature[d] > avg)
                printf(" Day %d\n", d+1);
    }
}

// ---------------- QUERY 4 ----------------

void topKStations() {

    int k;
    printf("Enter K: ");
    scanf("%d",&k);

    int order[MAX_STATIONS];
    float maxTemp[MAX_STATIONS];

    for(int i=0;i<stationCount;i++) {

        order[i]=i;
        maxTemp[i]=stations[i].weather.temperature[0];

        for(int j=1;j<MAX_DAYS;j++)
            if(stations[i].weather.temperature[j] >
               maxTemp[i])
                maxTemp[i]=
                stations[i].weather.temperature[j];
    }

    for(int i=0;i<stationCount-1;i++)
    for(int j=i+1;j<stationCount;j++)
    if(stations[order[i]].urban.population >
       stations[order[j]].urban.population ||
      (stations[order[i]].urban.population ==
       stations[order[j]].urban.population &&
       maxTemp[order[i]] < maxTemp[order[j]])) {

        int t=order[i];
        order[i]=order[j];
        order[j]=t;
    }

    printf("Top %d Stations:\n",k);
    for(int i=0;i<k && i<stationCount;i++)
        printf("%s\n", stations[order[i]].name);
}

// ---------------- QUERY 5 ----------------

void heatIslandIntensity() {

    for(int i=0;i<stationCount;i++) {

        if(strcmp(stations[i].urban.status,"urban")!=0)
            continue;

        int nearest=-1;
        float minDist=9999;

        for(int j=0;j<stationCount;j++)
            if(strcmp(stations[j].urban.status,"rural")==0 &&
               stations[i].distance[j] < minDist) {
                minDist = stations[i].distance[j];
                nearest = j;
            }

        if(nearest==-1) continue;

        float urbanAvg=0, ruralAvg=0;

        for(int d=0; d<MAX_DAYS; d++) {
            urbanAvg += stations[i].weather.temperature[d];
            ruralAvg += stations[nearest].weather.temperature[d];
        }

        urbanAvg /= MAX_DAYS;
        ruralAvg /= MAX_DAYS;

        printf("Heat Island Intensity for %s = %.2f\n",
               stations[i].name,
               urbanAvg - ruralAvg);
    }
}

// ---------------- MENU ----------------

int main() {

    int choice;

    while(1) {

        printf("\n--- R3 MENU ---\n");
        printf("1. Add Station\n");
        printf("2. Highest Heat Degree Days\n");
        printf("3. Thermally Comfortable Days\n");
        printf("4. Decreasing Vegetation + High Temp\n");
        printf("5. Top K Stations\n");
        printf("6. Heat Island Intensity\n");
        printf("7. Exit\n");

        printf("Enter choice: ");
        scanf("%d",&choice);

        switch(choice) {

            case 1: addStation(); break;
            case 2: highestHeatDegreeDays(); break;
            case 3: thermallyComfortableDays(); break;
            case 4: decreasingVegetationHighTemp(); break;
            case 5: topKStations(); break;
            case 6: heatIslandIntensity(); break;
            case 7: return 0;
            default: printf("Invalid Choice!\n");
        }
    }
}
