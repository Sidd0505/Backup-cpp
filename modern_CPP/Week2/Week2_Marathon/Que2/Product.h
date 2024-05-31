#ifndef PRODUCT_H
#define PRODUCT_H

#include<iostream>
#include<vector>
#include<memory>
#include<functional>
#include"ProductOrigin.h"
#include"ProductType.h"

class Product{
    private:
    std::string _product_id;
    ProductType _type;
    float _productprice;
    std::string _productBrand;
    ProductOrigin _origin;
    float _productTaxAmount;

    public:
    Product() = default;

    Product (Product&) = delete;
    Product (Product&&) = delete;

    Product& operator= (Product&) = delete;
    Product& operator= (Product&&) = delete;

    ~Product() = default;

    Product(std::string product_id, ProductType type, float productprice,
                 std::string productBrand, ProductOrigin origin, float productTaxAmount);

//Getter-Setters
    std::string productId() const { return _product_id; }
    void setProductId(const std::string &product_id) { _product_id = product_id; }

    ProductType type() const { return _type; }
    void setType(const ProductType &type) { _type = type; }

    float productprice() const { return _productprice; }
    void setProductprice(float productprice) { _productprice = productprice; }

    std::string productBrand() const { return _productBrand; }
    void setProductBrand(const std::string &productBrand) { _productBrand = productBrand; }

    ProductOrigin origin() const { return _origin; }
    void setOrigin(const ProductOrigin &origin) { _origin = origin; }

    float productTaxAmount() const { return _productTaxAmount; }
    void setProductTaxAmount(float productTaxAmount) { _productTaxAmount = productTaxAmount; }

    friend std::ostream &operator<<(std::ostream &os, const Product &rhs);
            
    




};

#endif // PRODUCT_H
