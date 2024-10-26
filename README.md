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
