#include "header.h"

// Implementation of the Product class

int Product::getProductNumber() const {
    return productNumber;
}

void Product::setProductNumber(int number) {
    productNumber = number;
}

std::string Product::getProductName() const {
    return productName;
}

void Product::setProductName(const std::string& name) {
    productName = name;
}

double Product::getRate() const {
    return rate;
}

void Product::setRate(double productRate) {
    rate = productRate;
}

std::string Product::getBrandName() const {
    return brandName;
}

void Product::setBrandName(const std::string& brand) {
    brandName = brand;
}

int Product::getQuantityInStock() const {
    return quantityInStock;
}

void Product::setQuantityInStock(int quantity) {
    quantityInStock = quantity;
}

int Product::getQuantityToPurchase() const {
    return quantityToPurchase;
}

void Product::setQuantityToPurchase(int quantity) {
    quantityToPurchase = quantity;
}

ProductCategory Product::getCategory() const {
    return category;
}

void Product::setCategory(ProductCategory productCategory) {
    category = productCategory;
}

bool Product::validate() {
    return quantityToPurchase <= quantityInStock;
}

double Product::calculateAmount() const {
    return rate * quantityToPurchase;
}

// Implementation of the calculateBill function

void calculateBill(Product products[], int size) {
    double totalBill = 0.0;

    std::cout << "Sr No\tItemName\tQuantity\tRate\tCategory\tAmount" << std::endl;

    for (int i = 0; i < size; i++) {
        std::cout << i + 1 << "\t" << products[i].getProductName() << "\t" << products[i].getQuantityToPurchase() << "\t"
                  << products[i].getRate() << "\t";

        switch (products[i].getCategory()) {
            case SHIRT:
                std::cout << "SHIRT\t";
                break;
            case SWEATER:
                std::cout << "SWEATER\t";
                break;
            case COAT:
                std::cout << "COAT\t";
                break;
            case JEANS:
                std::cout << "JEANS\t";
                break;
        }

        double amount = products[i].calculateAmount();
        std::cout << amount << std::endl;
        totalBill += amount;
    }

    std::cout << "\nTotal\t\t\t\t\t\t" << totalBill << std::endl;
}