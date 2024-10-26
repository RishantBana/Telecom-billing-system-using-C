# Telecom-billing-system-using-C
A simple C program to manage customer records. This application allows users to add, view, modify, delete, and calculate bills for customers based on their usage in minutes. It’s designed to handle up to 100 customer records, storing each customer's name, phone number, usage in minutes, and calculated bill.
Features
Add Customer: Create a new customer record with their name, phone number, and usage in minutes.
View All Customers: Display a list of all customers, including each customer’s name, phone number, usage, and total bill.
Modify Customer: Update an existing customer's usage (in minutes) based on their phone number.
View Payment: View a specific customer’s usage and total bill by searching with their phone number.
Delete Customer: Remove a customer’s record from the system using their phone number.
How It Works
Each customer's usage is calculated at a rate of $0.10 per minute. The program uses a Customer structure to hold each customer's information and stores up to 100 customer records in an array. A menu-driven interface allows users to perform actions, each of which is defined in a separate function.

Code Breakdown
Data Structure:

c
Copy code
typedef struct {
    char name[50];
    char phone[15];
    float usage;
    float total bill;
} Customer;
The Customer structure holds data for each customer.

Functions:

addCustomer(): Adds a new record to the list and calculates the total bill based on usage.
showAllCustomers(): Displays the list of customers with their usage and bills.
updateCustomer(char phone[]): Finds a customer by phone number and updates their usage and bill.
showCustomerPayment(char phone[]): Views a customer’s bill based on their phone number.
deleteCustomer(char phone[]): Deletes a customer record by shifting all subsequent records up to fill the gap.
Getting Started
Prerequisites
You’ll need a C compiler, such as gcc, to compile and run the program.

Compiling and Running
Compile the program using gcc:

bash
Copy code
gcc customer_management.c -o customer_management
Run the program:

bash
Copy code
./customer_management
Usage
Upon running the program, a menu will be displayed:

markdown
Copy code
1. Add Customer
2. Show All Customers
3. Update Customer Usage
4. Show Payment
5. Delete Customer
6. Exit
Select an option by entering the corresponding number. For example, choose 1 to add a new customer.

Follow the prompts to enter the customer information, such as their name, phone number, and usage.

Choose other options as needed to view, modify, or delete records.

Example
Adding a Customer:
Enter 1 and follow the prompts to input the customer's details.
Viewing All Customers:
Enter 2 to see the list of all customer records.
Modifying a Customer Record:
Enter 3, input the customer's phone number you want to modify, and enter the updated usage in minutes.
Deleting a Customer:
Enter 5, input the customer’s phone number, and confirm the deletion.
