// Stock Market Analysis System
#include <stdio.h>
#include <string.h>

#define MAX_STOCKS 10
#define MAX_DAYS 30

// ---------------- STRUCTURES ----------------

typedef struct {
    char date[15];
    float open, high, low, close, volume;
} StockData;

typedef struct {
    char name[30];
    StockData data[MAX_DAYS];
    int dayCount;
} Stock;

Stock stocks[MAX_STOCKS];
int stockCount = 0;

// ---------------- HELPER ----------------

int findStock(char name[]) {
    for(int i=0;i<stockCount;i++)
        if(strcmp(stocks[i].name,name)==0)
            return i;
    return -1;
}

// ---------------- ADD STOCK ----------------

void addStock() {

    if(stockCount >= MAX_STOCKS) {
        printf("Stock limit reached!\n");
        return;
    }

    printf("Enter Stock Name: ");
    scanf("%s", stocks[stockCount].name);

    printf("Enter number of days: ");
    scanf("%d", &stocks[stockCount].dayCount);

    for(int i=0;i<stocks[stockCount].dayCount;i++) {

        printf("Date: ");
        scanf("%s", stocks[stockCount].data[i].date);

        printf("Open High Low Close Volume: ");
        scanf("%f %f %f %f %f",
              &stocks[stockCount].data[i].open,
              &stocks[stockCount].data[i].high,
              &stocks[stockCount].data[i].low,
              &stocks[stockCount].data[i].close,
              &stocks[stockCount].data[i].volume);
    }

    stockCount++;
    printf("Stock Added Successfully!\n");
}

// ---------------- % CHANGE ----------------

void percentChange() {

    char name[30], start[15], end[15];

    printf("Stock Name: ");
    scanf("%s", name);

    int idx = findStock(name);
    if(idx == -1) { printf("Not Found!\n"); return; }

    printf("Start Date: ");
    scanf("%s", start);
    printf("End Date: ");
    scanf("%s", end);

    float s=0,e=0;

    for(int i=0;i<stocks[idx].dayCount;i++) {

        if(strcmp(stocks[idx].data[i].date,start)==0)
            s = stocks[idx].data[i].close;

        if(strcmp(stocks[idx].data[i].date,end)==0)
            e = stocks[idx].data[i].close;
    }

    if(s==0 || e==0) {
        printf("Invalid Dates!\n");
        return;
    }

    printf("Percentage Change = %.2f%%\n",
          ((e-s)/s)*100);
}

// ---------------- PROFIT LOSS ----------------

void profitLoss() {

    char name[30], buy[15], sell[15];

    printf("Stock Name: ");
    scanf("%s", name);

    int idx = findStock(name);
    if(idx==-1) { printf("Not Found!\n"); return; }

    printf("Buy Date: ");
    scanf("%s", buy);

    printf("Sell Date: ");
    scanf("%s", sell);

    float b=0,s=0;

    for(int i=0;i<stocks[idx].dayCount;i++) {

        if(strcmp(stocks[idx].data[i].date,buy)==0)
            b = stocks[idx].data[i].close;

        if(strcmp(stocks[idx].data[i].date,sell)==0)
            s = stocks[idx].data[i].close;
    }

    printf("Profit/Loss = %.2f\n", s-b);
}

// ---------------- HIGHEST & LOWEST ----------------

void performance(int type) {

    char start[15], end[15];

    printf("Start Date: ");
    scanf("%s", start);

    printf("End Date: ");
    scanf("%s", end);

    float bestValue = (type==1)? -9999 : 9999;
    char bestStock[30];

    for(int i=0;i<stockCount;i++) {

        float s=0,e=0;

        for(int j=0;j<stocks[i].dayCount;j++) {

            if(strcmp(stocks[i].data[j].date,start)==0)
                s = stocks[i].data[j].close;

            if(strcmp(stocks[i].data[j].date,end)==0)
                e = stocks[i].data[j].close;
        }

        if(s==0 || e==0) continue;

        float gain = ((e-s)/s)*100;

        if((type==1 && gain>bestValue) ||
           (type==0 && gain<bestValue)) {

            bestValue = gain;
            strcpy(bestStock, stocks[i].name);
        }
    }

    if(type==1)
        printf("Highest Performer: %s (%.2f%%)\n",
               bestStock,bestValue);
    else
        printf("Lowest Performer: %s (%.2f%%)\n",
               bestStock,bestValue);
}

// ---------------- SORT BY VOLUME & CLOSE ----------------

void sortVolumeClose() {

    char date[15];
    printf("Enter Date: ");
    scanf("%s", date);

    int order[MAX_STOCKS];
    float volume[MAX_STOCKS], close[MAX_STOCKS];

    for(int i=0;i<stockCount;i++) {

        order[i]=i;

        for(int j=0;j<stocks[i].dayCount;j++) {

            if(strcmp(stocks[i].data[j].date,date)==0) {

                volume[i] = stocks[i].data[j].volume;
                close[i] = stocks[i].data[j].close;
            }
        }
    }

    for(int i=0;i<stockCount-1;i++)
    for(int j=i+1;j<stockCount;j++)
    if(volume[i] < volume[j] ||
      (volume[i]==volume[j] && close[i]<close[j])) {

        float tv=volume[i]; volume[i]=volume[j]; volume[j]=tv;
        float tc=close[i]; close[i]=close[j]; close[j]=tc;

        int ti=order[i]; order[i]=order[j]; order[j]=ti;
    }

    printf("Sorted Stocks:\n");
    for(int i=0;i<stockCount;i++)
        printf("%s\n", stocks[order[i]].name);
}

// ---------------- WEIGHTED AVERAGE ----------------

void weightedAverage() {

    float total = 0;
    int count = 0;

    for(int i=0;i<stockCount;i++) {

        float sumCV=0, sumV=0;

        for(int j=0;j<stocks[i].dayCount;j++) {

            sumCV += stocks[i].data[j].close *
                     stocks[i].data[j].volume;

            sumV += stocks[i].data[j].volume;
        }

        if(sumV>0) {
            total += sumCV/sumV;
            count++;
        }
    }

    printf("Average of Averages = %.2f\n",
           total/count);
}

// ---------------- MENU ----------------

int main() {

    int choice;

    while(1) {

        printf("\n--- R2 MENU ---\n");
        printf("1. Add Stock\n");
        printf("2. Percentage Change\n");
        printf("3. Profit/Loss\n");
        printf("4. Highest Performer\n");
        printf("5. Lowest Performer\n");
        printf("6. Sort by Volume & Close\n");
        printf("7. Weighted Average\n");
        printf("8. Exit\n");

        printf("Enter choice: ");
        scanf("%d",&choice);

        switch(choice) {

            case 1: addStock(); break;
            case 2: percentChange(); break;
            case 3: profitLoss(); break;
            case 4: performance(1); break;
            case 5: performance(0); break;
            case 6: sortVolumeClose(); break;
            case 7: weightedAverage(); break;
            case 8: return 0;
            default: printf("Invalid Choice!\n");
        }
    }
}
