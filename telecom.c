#include <stdio.h>
#include <string.h>

#define MAX_CUSTOMERS 100
#define RATE_PER_MINUTE 0.1

typedef struct {
    char name[100];
    char phone[10];
    float usage;
    float totalBill;
} Customer;

Customer customers[MAX_CUSTOMERS];
int totalCustomers = 0;


void addCustomer() {
    if (totalCustomers >= MAX_CUSTOMERS) {
        printf("\nLimit reached! Cannot add more records.\n");
        return;
    }

    printf("\nEnter customer's name: ");
    scanf(" %[^\n]", customers[totalCustomers].name);
    printf("Enter customer's phone: ");
    scanf("%s", customers[totalCustomers].phone);
    printf("Enter usage in minutes: ");
    scanf("%f", &customers[totalCustomers].usage);
    
    customers[totalCustomers].totalBill = customers[totalCustomers].usage * RATE_PER_MINUTE;
    totalCustomers++;
    printf("\nRecord added.\n");
}

void showAllCustomers() {
    printf("\nName\tPhone\t\tUsage(min)\tBill($)\n");
    for (int i = 0; i < totalCustomers; ++i) {
        printf("%s\t%s\t%.2f\t\t%.2f\n", customers[i].name, customers[i].phone, customers[i].usage, customers[i].totalBill);
    }
}


void updateCustomer(char phone[]) {
    for (int i = 0; i < totalCustomers; ++i) {
        if (strcmp(customers[i].phone, phone) == 0) {
            printf("\nCurrent usage: %.2f minutes. Enter new usage: ", customers[i].usage);
            scanf("%f", &customers[i].usage);
            customers[i].totalBill = customers[i].usage * RATE_PER_MINUTE;
            printf("\nRecord updated.\n");
            return;
        }
    }
    printf("\nCustomer with phone %s not found.\n", phone);
}

void showCustomerPayment(char phone[]) {
    for (int i = 0; i < totalCustomers; ++i) {
        if (strcmp(customers[i].phone, phone) == 0) {
            printf("%s\t%s\t%.2f\t\t%.2f\n", customers[i].name, customers[i].phone, customers[i].usage, customers[i].totalBill);
            return;
        }
    }
    printf("\nCustomer with phone %s not found.\n", phone);
}

void deleteCustomer(char phone[]) {
    for (int i = 0; i < totalCustomers; ++i) {
        if (strcmp(customers[i].phone, phone) == 0) {
            for (int j = i; j < totalCustomers - 1; ++j) {
                customers[j] = customers[j + 1];
            }
            totalCustomers--;
            printf("\nCustomer deleted.\n");
            return;
        }
    }
    printf("\nCustomer with phone %s not found.\n", phone);
}

void menu() {
    printf("\nMenu:\n");
    printf("1. Add Customer\n");
    printf("2. Show All Customers\n");
    printf("3. Update Customer Usage\n");
    printf("4. Show Payment\n");
    printf("5. Delete Customer\n");
    printf("6. Exit\n");
}

int main() {
    int option;
    char phone[15];

    while (1) {
        menu();
        printf("Select an option: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                addCustomer();
                break;
            case 2:
                showAllCustomers();
                break;
            case 3:
                printf("Enter phone to update: ");
                scanf("%s", phone);
                updateCustomer(phone);
                break;
            case 4:
                printf("Enter phone to show payment: ");
                scanf("%s", phone);
                showCustomerPayment(phone);
                break;
            case 5:
                printf("Enter phone to delete: ");
                scanf("%s", phone);
                deleteCustomer(phone);
                break;
            case 6:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid selection. Try again.\n");
        }
    }
    return 0;
}
