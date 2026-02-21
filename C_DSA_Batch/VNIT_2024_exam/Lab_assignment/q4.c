// Ground Automation System
#include <stdio.h>
#include <string.h>

#define MAX_GROUNDS 100
#define MAX_GAMES 10
#define MAX_MATCHES 200

// ---------------- STRUCTURES ----------------

typedef struct {
    char gameName[30];
    char date[15];
    char time[10];
    float hourlyRate;
} GameSlot;

typedef struct {
    char groundName[30];
    char city[30];
    char state[30];
    GameSlot slots[MAX_GAMES];
    int slotCount;
} Ground;

typedef struct {
    char groundName[30];
    char gameName[30];
    char date[15];
    char time[10];
} Match;

Ground grounds[MAX_GROUNDS];
Match matches[MAX_MATCHES];

int groundCount = 0;
int matchCount = 0;

// ---------------- ADD GROUND (SORTED) ----------------

void addGround() {

    Ground g;

    printf("Ground Name: ");
    scanf("%s", g.groundName);

    printf("City: ");
    scanf("%s", g.city);

    printf("State: ");
    scanf("%s", g.state);

    printf("Number of Slots: ");
    scanf("%d", &g.slotCount);

    for(int i=0;i<g.slotCount;i++) {

        printf("Game Name: ");
        scanf("%s", g.slots[i].gameName);

        printf("Date: ");
        scanf("%s", g.slots[i].date);

        printf("Time: ");
        scanf("%s", g.slots[i].time);

        printf("Hourly Rate: ");
        scanf("%f", &g.slots[i].hourlyRate);
    }

    int i = groundCount-1;

    while(i>=0 &&
         (strcmp(grounds[i].groundName,g.groundName)>0 ||
         (strcmp(grounds[i].groundName,g.groundName)==0 &&
          strcmp(grounds[i].city,g.city)>0))) {

        grounds[i+1] = grounds[i];
        i--;
    }

    grounds[i+1] = g;
    groundCount++;

    printf("Ground Added Successfully!\n");
}

// ---------------- SCHEDULE MATCH ----------------

void scheduleMatch() {

    if(matchCount >= MAX_MATCHES) {
        printf("Match limit reached!\n");
        return;
    }

    printf("Ground Name: ");
    scanf("%s", matches[matchCount].groundName);

    printf("Game Name: ");
    scanf("%s", matches[matchCount].gameName);

    printf("Date: ");
    scanf("%s", matches[matchCount].date);

    printf("Time: ");
    scanf("%s", matches[matchCount].time);

    matchCount++;
    printf("Match Scheduled Successfully!\n");
}

// ---------------- FIXTURES IN CITY ----------------

void getFixturesinCity() {

    char city[30];
    printf("City: ");
    scanf("%s", city);

    for(int i=0;i<matchCount;i++) {

        for(int j=0;j<groundCount;j++) {

            if(strcmp(matches[i].groundName,
                      grounds[j].groundName)==0 &&
               strcmp(grounds[j].city,city)==0) {

                printf("%s - %s - %s\n",
                       matches[i].date,
                       grounds[j].groundName,
                       matches[i].gameName);
            }
        }
    }
}

// ---------------- SORT FIXTURES BY DATE ----------------

void getFixturesSortedonDate() {

    for(int i=0;i<matchCount-1;i++)
    for(int j=i+1;j<matchCount;j++)
    if(strcmp(matches[i].date,matches[j].date)>0 ||
      (strcmp(matches[i].date,matches[j].date)==0 &&
       strcmp(matches[i].time,matches[j].time)>0)) {

        Match temp = matches[i];
        matches[i] = matches[j];
        matches[j] = temp;
    }

    for(int i=0;i<matchCount;i++)
        printf("%s %s %s\n",
               matches[i].date,
               matches[i].time,
               matches[i].groundName);
}

// ---------------- IS AVAILABLE ----------------

void isAvailable() {

    char game[30], date[15], time[10];

    printf("Game Name: ");
    scanf("%s", game);

    printf("Date: ");
    scanf("%s", date);

    printf("Time: ");
    scanf("%s", time);

    for(int i=0;i<groundCount;i++) {

        int available = 0;

        for(int j=0;j<grounds[i].slotCount;j++) {

            if(strcmp(grounds[i].slots[j].gameName,game)==0 &&
               strcmp(grounds[i].slots[j].date,date)==0 &&
               strcmp(grounds[i].slots[j].time,time)==0) {

                available = 1;
            }
        }

        for(int k=0;k<matchCount;k++) {

            if(strcmp(matches[k].groundName,
                      grounds[i].groundName)==0 &&
               strcmp(matches[k].date,date)==0 &&
               strcmp(matches[k].time,time)==0) {

                available = 0;
            }
        }

        if(available)
            printf("%s (%s)\n",
                   grounds[i].groundName,
                   grounds[i].city);
    }
}

// ---------------- UNIQUE SPORTS ----------------

void UniqueSports() {

    char gname[30], city[30];

    printf("Ground Name: ");
    scanf("%s", gname);

    printf("City: ");
    scanf("%s", city);

    for(int i=0;i<groundCount;i++) {

        if(strcmp(grounds[i].groundName,gname)==0 &&
           strcmp(grounds[i].city,city)==0) {

            for(int s=0;s<grounds[i].slotCount;s++) {

                int unique = 1;

                for(int j=0;j<groundCount;j++) {

                    if(i==j) continue;

                    for(int k=0;k<grounds[j].slotCount;k++) {

                        if(strcmp(
                           grounds[i].slots[s].gameName,
                           grounds[j].slots[k].gameName)==0)
                            unique = 0;
                    }
                }

                if(unique)
                    printf("Unique Sport: %s\n",
                           grounds[i].slots[s].gameName);
            }
        }
    }
}

// ---------------- SORT ON PRICE ----------------

void SortOnPriceForAGame() {

    char game[30], date[15], time[10];

    printf("Game Name: ");
    scanf("%s", game);

    printf("Date: ");
    scanf("%s", date);

    printf("Time: ");
    scanf("%s", time);

    int idx[MAX_GROUNDS];
    float price[MAX_GROUNDS];
    int count=0;

    for(int i=0;i<groundCount;i++) {

        for(int j=0;j<grounds[i].slotCount;j++) {

            if(strcmp(grounds[i].slots[j].gameName,game)==0 &&
               strcmp(grounds[i].slots[j].date,date)==0 &&
               strcmp(grounds[i].slots[j].time,time)==0) {

                idx[count]=i;
                price[count]=grounds[i].slots[j].hourlyRate;
                count++;
            }
        }
    }

    for(int i=0;i<count-1;i++)
    for(int j=i+1;j<count;j++)
    if(price[i] > price[j]) {

        float tp=price[i];
        price[i]=price[j];
        price[j]=tp;

        int ti=idx[i];
        idx[i]=idx[j];
        idx[j]=ti;
    }

    for(int i=0;i<count;i++)
        printf("%s - %.2f\n",
               grounds[idx[i]].groundName,
               price[i]);
}

// ---------------- MENU ----------------

int main() {

    int choice;

    while(1) {

        printf("\n--- R4 MENU ---\n");
        printf("1. Add Ground\n");
        printf("2. Schedule Match\n");
        printf("3. Fixtures in City\n");
        printf("4. Fixtures Sorted on Date\n");
        printf("5. Check Availability\n");
        printf("6. Unique Sports\n");
        printf("7. Sort on Price for Game\n");
        printf("8. Exit\n");

        printf("Enter Choice: ");
        scanf("%d",&choice);

        switch(choice) {

            case 1: addGround(); break;
            case 2: scheduleMatch(); break;
            case 3: getFixturesinCity(); break;
            case 4: getFixturesSortedonDate(); break;
            case 5: isAvailable(); break;
            case 6: UniqueSports(); break;
            case 7: SortOnPriceForAGame(); break;
            case 8: return 0;
            default: printf("Invalid Choice!\n");
        }
    }
}
