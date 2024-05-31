#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <string>

// Enum for Product Category
enum ProductCategory {
    SHIRT,
    SWEATER,
    COAT,
    JEANS
};

class Product {
private:
    int productNumber;
    std::string productName;
    double rate;
    std::string brandName;
    int quantityInStock;
    int quantityToPurchase;
    ProductCategory category;

public:
    // Getters and setters
    int getProductNumber() const;
    void setProductNumber(int number);
    std::string getProductName() const;
    void setProductName(const std::string& name);
    double getRate() const;
    void setRate(double productRate);
    std::string getBrandName() const;
    void setBrandName(const std::string& brand);
    int getQuantityInStock() const;
    void setQuantityInStock(int quantity);
    int getQuantityToPurchase() const;
    void setQuantityToPurchase(int quantity);
    ProductCategory getCategory() const;
    void setCategory(ProductCategory productCategory);

    // Validate quantity to purchase
    bool validate();

    // Calculate the total amount for this product
    double calculateAmount() const;

  
};

// Global function to calculate the bill and display it
void calculateBill(Product products[], int size);

#endif
 