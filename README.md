# eCommerce Website

An eCommerce website built with PHP, MySQL, and Bootstrap. This platform allows users to browse products, add them to the cart, and proceed to checkout. Admins can manage products, categories, and orders.

## Features

### User
- **Browse Products:** View products by categories.
- **Search Products:** Search for products using keywords.
- **Product Details:** View detailed information about a product.
- **Cart Management:** Add products to the cart, update quantities, and remove items.
- **Checkout:** Proceed to checkout and place orders.
- **User Registration & Login:** Register a new account or log in to an existing one.
- **Order History:** View past orders and their statuses.

### Admin
- **Admin Dashboard:** Access a dashboard with an overview of site activities.
- **Product Management:** Add, update, and delete products.
- **Category Management:** Add, update, and delete product categories.
- **Order Management:** View and update order statuses.
- **User Management:** Manage user accounts and their roles.

## Tech Stack

- **Backend:** PHP
- **Database:** MySQL
- **Frontend:** HTML, CSS, Bootstrap, JavaScript
- **Libraries:** jQuery
- **Authentication:** PHP sessions
- **Deployment:** Apache Server

## Installation

### Prerequisites

- PHP >= 7.4
- MySQL
- Apache Server
- Composer

### Steps

1. **Clone the repository:**
    ```sh
    git clone https://github.com/yourusername/ecommerce-website.git
    cd ecommerce-website
    ```

2. **Install dependencies:**
    ```sh
    composer install
    ```

3. **Create a `.env` file:**
    ```sh
    cp .env.example .env
    ```

4. **Configure the `.env` file:** Update the `.env` file with your database credentials and other configurations.

5. **Import the database:**
    - Import the `ecommerce.sql` file into your MySQL database.

6. **Start the development server:**
    ```sh
    php -S localhost:8000
    ```

7. **Access the website:**
    Open your browser and go to `http://localhost:8000`

## Project Structure

