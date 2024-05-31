#include "header.h"
#include <iostream>

int main() {
    // Create an array of 3 products
    Product products[3];

    // Accept product details from the user
    for (int i = 0; i < 3; i++) {
        Product product;
        std::cout << "Enter Product " << i + 1 << " Details:" << std::endl;

        int productNumber, quantityInStock, quantityToPurchase;
        std::string productName, brandName;
        double rate;
        int category;

        std::cout << "Product Number: ";
        std::cin >> productNumber;
        product.setProductNumber(productNumber);

        std::cout << "Product Name: ";
        std::cin.ignore();
        std::getline(std::cin, productName);
        product.setProductName(productName);

        std::cout << "Rate: ";
        std::cin >> rate;
        product.setRate(rate);

        std::cout << "Brand Name: ";
        std::cin.ignore();
        std::getline(std::cin, brandName);
        product.setBrandName(brandName);

        std::cout << "Quantity in Stock: ";
        std::cin >> quantityInStock;
        product.setQuantityInStock(quantityInStock);

        std::cout << "Quantity to Purchase: ";
        std::cin >> quantityToPurchase;
        product.setQuantityToPurchase(quantityToPurchase);

        std::cout << "Category (0 for SHIRT, 1 for SWEATER, 2 for COAT, 3 for JEANS): ";
        std::cin >> category;
        product.setCategory(static_cast<ProductCategory>(category));

        // Validate quantity to purchase
        if (!product.validate()) {
            std::cout << "Error: Quantity to Purchase is greater than Quantity in Stock." << std::endl;
            return 1;
        }

        products[i] = product;
    }

    // Display the final bill
    calculateBill(products, 3);

    return 0;
}
 