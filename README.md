# Mini Project - Sales and Inventory Management System 🛒

![Build Status](https://img.shields.io/badge/build-passing-brightgreen)
![C++](https://img.shields.io/badge/language-C%2B%2B-blue)
![Windows Forms](https://img.shields.io/badge/platform-Windows%20Forms-green)

Welcome to the **Sales and Inventory Management System**! This project provides a user-friendly interface for managing product sales using a temporary database (dataset), tracking inventory, and calculating VAT and discounts in real-time. With this system, users can easily update products, process sales, and keep track of inventory changes. This project was done using **Visual Studio Ultimate 2012** and **C++**. Let's dive into how everything works!

---

## Table of Contents 📑

1. [User Login](#user-login)
2. [Product Inventory Management](#product-inventory-management)
3. [Sales Processing](#sales-processing)
4. [Price Calculation](#price-calculation)
5. [How It Works](#how-it-works)
6. [Validation and Error Handling](#validation-and-error-handling)
7. [Technologies Used](#technologies-used)
8. [To Run the Project](#to-run-the-project)
9. [Contributions](#contributions)
10. [Conclusion](#conclusion)

---

## User Login 🔐

- Secure login interface to ensure only authorized users can access the system (currently there are only **admin** and **staff** accounts).
- Ability to log out and log back in seamlessly.

---

## Product Inventory Management 📦

- **Add New Products**: Add product details such as ID, name, price, quantity, and tax rate.
- **Modify Existing Products**: Update product information, including price, quantity, and tax.
- **View Inventory**: Easily view and track available products, ensuring you know what’s in stock.

---

## Sales Processing 💸

- **Record Sales**: Easily enter sales information, including product ID, quantity sold, and price.
- **Calculate VAT**: The system automatically calculates VAT based on the provided tax rate.
- **Apply Discounts**: Discounts are applied depending on the quantity sold.
- **Update Inventory**: After each sale, the inventory is updated to reflect the new stock levels.

---

## Price Calculation 💵

- **Total Price**: The total sale price is calculated by multiplying the price and quantity.
- **VAT Calculation**: VAT is calculated based on the product's price and tax rate.
- **Discounts**: Discounts are applied based on the quantity sold (e.g., 5% for quantities between 5-10 and 10% for quantities above 10).

---

## How It Works ⚙️

### Logging In
1. When you first open the program, you’ll be prompted to log in.
2. After logging in successfully, you’ll be directed to the main interface where you can manage your inventory and process sales.
3. If you log out, the program will allow you to log in again seamlessly.

### Inventory Management
- **Add New Products**: Use the “Add Product” button to enter new products into the system. You will need to enter the product’s ID, name, price, quantity, and tax rate.
- **Modify Products**: Select a product from the inventory list, click “Modify,” and change the details like price or quantity. The system will automatically update the total price based on changes.
- **View Products**: The inventory grid will show all products, their current stock, and other essential details.

### Sales Processing
1. **Start a Sale**: To process a sale, enter the product ID, quantity, and price. The system will calculate the VAT and apply any relevant discounts automatically.
2. **Review the Sale**: Before finalizing, you’ll see a summary with the VAT amount, discounts, and final price.
3. **Update Inventory**: After completing a sale, the inventory will be updated to reflect the quantity sold.

---

## Validation and Error Handling ⚠️

- **Input Validation**: All inputs are validated to ensure the data entered is correct (e.g., checking for numeric values and non-negative quantities).
- **Error Handling**: The system provides clear error messages if required fields are empty or if the product quantity exceeds available stock.
- **Confirmation**: Before making changes, such as modifying product details or saving a sale, users are prompted to confirm their actions.

---

## Technologies Used 🖥️

- **C++ with C++/CLI**: The project is built using C++ and Windows Forms for creating the GUI.
- **DataGridView**: Used to display and interact with product data and sales records.
- **MessageBox**: Provides error messages and confirmation dialogs to guide users through actions.

---

## To Run the Project 🚀

1. Clone or download the project files.
2. Open the project in **Visual Studio** (I used **Visual Studio Ultimate 2012**).
3. Build and run the application.
4. Log in with your credentials and begin managing sales and inventory!

---

## Contributions 🤝

Feel free to suggest new features or improvements! Pull requests are always welcome. Whether it’s a bug fix or a new feature, this was a college project and hopefully meets the professor's standards. Any contribution is appreciated!

---

## Conclusion 🎉

Thank you for reading and checking this out! It’s a new experience for me using **C++** (it's been a tough ride), and I really wish we studied this module in **C#**. I hope you find this project helpful!

---

