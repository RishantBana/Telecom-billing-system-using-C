# Telecom-billing-system-using-C

A simple C program to manage customer records. This application allows users to add, view, modify, delete, and calculate bills for customers based on their usage in minutes. It’s designed to handle up to 100 customer records, storing each customer's name, phone number, usage, and calculated bill.


---


## ✨ Features

- **Add Customer**: Create a new customer record with name, phone number, and usage in minutes.
- **View All Customers**: Display all customer records with their names, phone numbers, usage, and total bills.
- **Modify Customer**: Update the usage for an existing customer.
- **View Payment**: View a specific customer’s usage and total bill by searching with their phone number.
- **Delete Customer**: Remove a customer’s record from the system using their phone number.


---


## 🛠️ How It Works

Each customer's bill is calculated based on a usage rate of `$0.10` per minute. The program uses a `Customer` structure to store each customer's information, with a menu-driven interface allowing users to perform actions on these records.


### 📂 Data Structure

The `Customer` structure stores customer data in an array:

```c
typedef struct {
    char name[50];
    char phone[15];
    float usage;
    float totalBill;
} Customer;
```


### 🔍 Core Functions

| Function                  | Description                                                                  |
|---------------------------|------------------------------------------------------------------------------|
| `addCustomer()`           | Adds a new record to the list and calculates the total bill based on usage. |
| `showAllCustomers()`      | Displays the list of customers along with their usage and bills.            |
| `updateCustomer()`        | Finds a customer by phone number and updates their usage and bill.          |
| `showCustomerPayment()`   | Views a customer’s usage and bill based on their phone number.              |
| `deleteCustomer()`        | Deletes a customer record by shifting all subsequent records up to fill the gap. |


---


## 🚀 Getting Started


### 📋 Prerequisites

You’ll need a C compiler, such as `gcc`, to compile and run the program.


### 📂 Compiling and Running

1. **Compile the program:**
   ```
   gcc customer_management.c -o customer_management
   
2. **Run the program**
   ```
   ./customer_management
   
3. **After running the program, a menu is displayed:**
   ```
   1. Add Customer
    2. Show All Customers
    3. Update Customer Usage
    4. Show Payment
    5. Delete Customer
    6. Exit


### 💡 Example
#### **Adding a Customer:**
##### ***Select 1***, then enter the customer's name, phone, and usage when prompted.
#### **Viewing All Customers:**
##### ***Select 2*** to see a list of all customer records.
#### **Modifying a Customer Record:**
##### ***Select 3***, enter the phone number of the customer, then provide the updated usage in minutes.
#### **Deleting a Customer:**
##### ***Select 5***, enter the customer’s phone number, and confirm deletion.
