// Shared Expense Manager system
#include <stdio.h>
#include <string.h>

#define MAX_USERS 1000
#define MAX_EXPENSES 1000
#define MAX_SHARE 4

// ---------------- STRUCTURES ----------------

typedef struct {
    int userID;
    char name[50];
} User;

typedef struct {
    int expenseID;
    float amount;
    int paidBy;
    int sharedBy[MAX_SHARE];
    int shareCount;
} Expense;

// ---------------- GLOBAL ARRAYS ----------------

User users[MAX_USERS];
Expense expenses[MAX_EXPENSES];

int userCount = 0;
int expenseCount = 0;

// ---------------- HELPER FUNCTIONS ----------------

int findUserIndex(int id) {
    for(int i=0;i<userCount;i++)
        if(users[i].userID == id)
            return i;
    return -1;
}

int findExpenseIndex(int id) {
    for(int i=0;i<expenseCount;i++)
        if(expenses[i].expenseID == id)
            return i;
    return -1;
}

// ---------------- ADD USER ----------------

void AddUser() {
    User u;

    printf("Enter User ID: ");
    scanf("%d",&u.userID);

    if(findUserIndex(u.userID) != -1) {
        printf("User ID already exists!\n");
        return;
    }

    printf("Enter Name: ");
    scanf("%s",u.name);

    // Insert in sorted order
    int i = userCount-1;
    while(i>=0 && users[i].userID > u.userID) {
        users[i+1] = users[i];
        i--;
    }
    users[i+1] = u;
    userCount++;

    printf("User Added Successfully!\n");
}

// ---------------- ADD EXPENSE ----------------

void AddExpense() {
    Expense e;

    printf("Enter Expense ID: ");
    scanf("%d",&e.expenseID);

    if(findExpenseIndex(e.expenseID) != -1) {
        printf("Expense ID already exists!\n");
        return;
    }

    printf("Enter Amount: ");
    scanf("%f",&e.amount);

    printf("Enter Payer User ID: ");
    scanf("%d",&e.paidBy);

    if(findUserIndex(e.paidBy) == -1) {
        printf("Invalid User ID!\n");
        return;
    }

    printf("Enter number of users sharing: ");
    scanf("%d",&e.shareCount);

    for(int i=0;i<e.shareCount;i++) {
        printf("Enter User ID: ");
        scanf("%d",&e.sharedBy[i]);

        if(findUserIndex(e.sharedBy[i]) == -1) {
            printf("Invalid User!\n");
            return;
        }
    }

    // Insert sorted
    int i = expenseCount-1;
    while(i>=0 && expenses[i].expenseID > e.expenseID) {
        expenses[i+1] = expenses[i];
        i--;
    }
    expenses[i+1] = e;
    expenseCount++;

    printf("Expense Added Successfully!\n");
}

// ---------------- AMOUNT OWED ----------------

void AmountOwed(int id) {
    float total = 0;

    for(int i=0;i<expenseCount;i++) {
        if(expenses[i].paidBy == id) {

            float share = expenses[i].amount / expenses[i].shareCount;

            for(int j=0;j<expenses[i].shareCount;j++) {
                if(expenses[i].sharedBy[j] != id) {
                    printf("User %d owes %.2f\n",
                           expenses[i].sharedBy[j], share);
                    total += share;
                }
            }
        }
    }
    printf("Total Owed = %.2f\n", total);
}

// ---------------- AMOUNT TO PAY ----------------

void AmountToPay(int id) {
    float total = 0;

    for(int i=0;i<expenseCount;i++) {

        if(expenses[i].paidBy != id) {

            for(int j=0;j<expenses[i].shareCount;j++) {

                if(expenses[i].sharedBy[j] == id) {

                    float share = expenses[i].amount /
                                  expenses[i].shareCount;

                    printf("Pay %.2f to User %d\n",
                           share, expenses[i].paidBy);

                    total += share;
                }
            }
        }
    }
    printf("Total To Pay = %.2f\n", total);
}

// ---------------- USER BALANCES ----------------

void UserBalances() {

    for(int i=0;i<userCount;i++) {

        float owed=0, pay=0;
        int id = users[i].userID;

        for(int k=0;k<expenseCount;k++) {

            float share = expenses[k].amount /
                          expenses[k].shareCount;

            if(expenses[k].paidBy == id) {
                for(int j=0;j<expenses[k].shareCount;j++)
                    if(expenses[k].sharedBy[j] != id)
                        owed += share;
            }

            if(expenses[k].paidBy != id) {
                for(int j=0;j<expenses[k].shareCount;j++)
                    if(expenses[k].sharedBy[j] == id)
                        pay += share;
            }
        }

        float balance = owed - pay;

        printf("User %s (%d) Balance = %.2f\n",
               users[i].name, id, balance);
    }
}

// ---------------- SETTLE UP ----------------

void SettleUp(int u1, int u2) {

    for(int i=0;i<expenseCount;i++) {

        if(expenses[i].paidBy == u2) {

            for(int j=0;j<expenses[i].shareCount;j++) {

                if(expenses[i].sharedBy[j] == u1) {

                    float share = expenses[i].amount /
                                  expenses[i].shareCount;

                    printf("Settled %.2f for Expense %d\n",
                           share, expenses[i].expenseID);

                    // remove user from share list
                    for(int k=j;k<expenses[i].shareCount-1;k++)
                        expenses[i].sharedBy[k] =
                        expenses[i].sharedBy[k+1];

                    expenses[i].shareCount--;
                    return;
                }
            }
        }
    }
    printf("No pending settlement found.\n");
}

// ---------------- DELETE USER ----------------

void DeleteUser(int id) {

    float owed=0,pay=0;

    for(int i=0;i<expenseCount;i++) {

        float share = expenses[i].amount /
                      expenses[i].shareCount;

        if(expenses[i].paidBy == id) {
            for(int j=0;j<expenses[i].shareCount;j++)
                if(expenses[i].sharedBy[j] != id)
                    owed += share;
        }

        if(expenses[i].paidBy != id) {
            for(int j=0;j<expenses[i].shareCount;j++)
                if(expenses[i].sharedBy[j] == id)
                    pay += share;
        }
    }

    if(owed-pay != 0) {
        printf("User has unsettled balance!\n");
        return;
    }

    int index = findUserIndex(id);
    if(index == -1) return;

    for(int i=index;i<userCount-1;i++)
        users[i] = users[i+1];

    userCount--;
    printf("User Deleted Successfully.\n");
}

// ---------------- DELETE EXPENSE ----------------

void DeleteExpense(int expID, int userID) {

    int index = findExpenseIndex(expID);

    if(index == -1 ||
       expenses[index].paidBy != userID) {

        printf("Invalid combination!\n");
        return;
    }

    for(int i=index;i<expenseCount-1;i++)
        expenses[i] = expenses[i+1];

    expenseCount--;
    printf("Expense Deleted.\n");
}

// ---------------- MAIN MENU ----------------

int main() {

    int choice,id1,id2,expID;

    while(1) {

        printf("\n--- MENU ---\n");
        printf("1. Add User\n");
        printf("2. Add Expense\n");
        printf("3. Amount Owed\n");
        printf("4. Amount To Pay\n");
        printf("5. User Balances\n");
        printf("6. Settle Up\n");
        printf("7. Delete User\n");
        printf("8. Delete Expense\n");
        printf("9. Exit\n");

        printf("Enter choice: ");
        scanf("%d",&choice);

        switch(choice) {

            case 1: AddUser(); break;
            case 2: AddExpense(); break;

            case 3:
                printf("Enter User ID: ");
                scanf("%d",&id1);
                AmountOwed(id1);
                break;

            case 4:
                printf("Enter User ID: ");
                scanf("%d",&id1);
                AmountToPay(id1);
                break;

            case 5:
                UserBalances();
                break;

            case 6:
                printf("Enter Payer ID: ");
                scanf("%d",&id1);
                printf("Enter Receiver ID: ");
                scanf("%d",&id2);
                SettleUp(id1,id2);
                break;

            case 7:
                printf("Enter User ID: ");
                scanf("%d",&id1);
                DeleteUser(id1);
                break;

            case 8:
                printf("Enter Expense ID: ");
                scanf("%d",&expID);
                printf("Enter User ID: ");
                scanf("%d",&id1);
                DeleteExpense(expID,id1);
                break;

            case 9:
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }
}
