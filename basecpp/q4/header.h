#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <cstring>
enum ProductType
{
    MobilePhone,
    Laptop,
    Tv
};

class Product
{
public:
    long int productId;
    std::string name;
    char brand[20];
    float price;
    ProductType product_type;
    float taxammount;

    Product()
    {
        price = 0.0f;
        if (price > 1000)
        {
            taxammount = 0.05 * price;
        }
        else
        {
            taxammount = 0;
        }
    }
    void accept();
    friend std::ostream &operator<<(std::ostream &os, const Product &p);
    char &operator[](int index);
    bool operator==(Product &r3);
    void operator=(Product &p);

    long int getProductId() const { return productId; }
    void setProductId(long int productId_) { productId = productId_; }

    std::string getName() const { return name; }
    void setName(const std::string &name_) { name = name_; }

    ProductType productType() const { return product_type; }
    void setProductType(const ProductType &productType) { product_type = productType; }

    float getTaxammount() const { return taxammount; }
    void setTaxammount(float taxammount_) { taxammount = taxammount_; }
};

#endif // HEADER_H
