// Online Food Ordering System
#include <stdio.h>
#include <string.h>

#define MAX_RESTAURANTS 100
#define MAX_ITEMS 50
#define MAX_ORDERS 500

// ---------------- STRUCTURES ----------------

typedef struct {
    char name[30];
    float price;
    int serviceTime;
    int isSpecial;
    int isItemOfDay;
} FoodItem;

typedef struct {
    char name[30];
    char address[50];
    char area[30];
    FoodItem items[MAX_ITEMS];
    int itemCount;
} Restaurant;

typedef struct {
    int orderID;
    char orderTime[10];
    char deliveryTime[10];
    char userName[30];
    char phone[15];
    char address[50];
    char restaurantName[30];
    char itemName[30];
    int quantity;
} Order;

Restaurant restaurants[MAX_RESTAURANTS];
Order orders[MAX_ORDERS];

int restaurantCount = 0;
int orderCount = 0;
int nextOrderID = 1;

// ---------------- ADD RESTAURANT ----------------

void addRestaurant() {

    Restaurant r;

    printf("Restaurant Name: ");
    scanf("%s", r.name);

    printf("Address: ");
    scanf("%s", r.address);

    printf("Area: ");
    scanf("%s", r.area);

    printf("Number of Items: ");
    scanf("%d", &r.itemCount);

    for(int i=0;i<r.itemCount;i++) {

        printf("Item Name: ");
        scanf("%s", r.items[i].name);

        printf("Price: ");
        scanf("%f", &r.items[i].price);

        printf("Service Time: ");
        scanf("%d", &r.items[i].serviceTime);

        printf("Is Special (1/0): ");
        scanf("%d", &r.items[i].isSpecial);

        printf("Is Item of Day (1/0): ");
        scanf("%d", &r.items[i].isItemOfDay);
    }

    int i = restaurantCount-1;

    while(i>=0 &&
         (strcmp(restaurants[i].name,r.name)>0 ||
         (strcmp(restaurants[i].name,r.name)==0 &&
          strcmp(restaurants[i].address,r.address)>0))) {

        restaurants[i+1] = restaurants[i];
        i--;
    }

    restaurants[i+1] = r;
    restaurantCount++;

    printf("Restaurant Added Successfully!\n");
}

// ---------------- GET MIN TIME ----------------

void getMinTime() {

    char item[30];
    int qty;

    printf("Food Item: ");
    scanf("%s", item);

    printf("Quantity: ");
    scanf("%d", &qty);

    int minTime = 9999;
    int best = -1;

    for(int i=0;i<restaurantCount;i++)
    for(int j=0;j<restaurants[i].itemCount;j++)
    if(strcmp(restaurants[i].items[j].name,item)==0) {

        int t = restaurants[i].items[j].serviceTime * qty;

        if(t < minTime) {
            minTime = t;
            best = i;
        }
    }

    if(best!=-1)
        printf("Best Restaurant: %s (%d mins)\n",
               restaurants[best].name, minTime);
    else
        printf("Item Not Found!\n");
}

// ---------------- PLACE ORDER ----------------

void placeOrder() {

    Order o;
    o.orderID = nextOrderID++;

    printf("Order Time (HH:MM): ");
    scanf("%s", o.orderTime);

    printf("User Name: ");
    scanf("%s", o.userName);

    printf("Phone: ");
    scanf("%s", o.phone);

    printf("Address: ");
    scanf("%s", o.address);

    printf("Restaurant Name: ");
    scanf("%s", o.restaurantName);

    printf("Item Name: ");
    scanf("%s", o.itemName);

    printf("Quantity: ");
    scanf("%d", &o.quantity);

    int time = 0;

    for(int i=0;i<restaurantCount;i++)
    if(strcmp(restaurants[i].name,o.restaurantName)==0)
    for(int j=0;j<restaurants[i].itemCount;j++)
    if(strcmp(restaurants[i].items[j].name,o.itemName)==0)
        time = restaurants[i].items[j].serviceTime *
               o.quantity;

    sprintf(o.deliveryTime,"%d", time);

    int i = orderCount-1;

    while(i>=0 &&
         (strcmp(orders[i].orderTime,o.orderTime)>0 ||
         (strcmp(orders[i].orderTime,o.orderTime)==0 &&
          strcmp(orders[i].deliveryTime,o.deliveryTime)>0))) {

        orders[i+1] = orders[i];
        i--;
    }

    orders[i+1] = o;
    orderCount++;

    printf("Order Placed! ID = %d\n", o.orderID);
}

// ---------------- ITEM AVAILABILITY ----------------

void getItemAvailability() {

    char item[30];
    printf("Food Item: ");
    scanf("%s", item);

    for(int i=0;i<restaurantCount;i++)
    for(int j=0;j<restaurants[i].itemCount;j++)
    if(strcmp(restaurants[i].items[j].name,item)==0)
        printf("%s - %.2f\n",
               restaurants[i].name,
               restaurants[i].items[j].price);
}

// ---------------- DISPLAY SPECIAL ITEMS ----------------

void getAllSpecialItemListinSortedOrder() {

    for(int i=0;i<restaurantCount;i++)
    for(int j=0;j<restaurants[i].itemCount;j++)
    if(restaurants[i].items[j].isSpecial)
        printf("%s - %s - %.2f\n",
               restaurants[i].name,
               restaurants[i].items[j].name,
               restaurants[i].items[j].price);
}

// ---------------- MENU ----------------

int main() {

    int choice;

    while(1) {

        printf("\n--- R5 MENU ---\n");
        printf("1. Add Restaurant\n");
        printf("2. Get Minimum Delivery Time\n");
        printf("3. Place Order\n");
        printf("4. Get Item Availability\n");
        printf("5. Get Special Items\n");
        printf("6. Exit\n");

        printf("Enter Choice: ");
        scanf("%d",&choice);

        switch(choice) {

            case 1: addRestaurant(); break;
            case 2: getMinTime(); break;
            case 3: placeOrder(); break;
            case 4: getItemAvailability(); break;
            case 5: getAllSpecialItemListinSortedOrder(); break;
            case 6: return 0;
            default: printf("Invalid Choice!\n");
        }
    }
}
