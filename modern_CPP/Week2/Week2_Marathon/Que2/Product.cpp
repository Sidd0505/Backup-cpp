#include"Product.h"

std::ostream &operator<<(std::ostream &os, const Product &rhs) {
    os << "_product_id: " << rhs._product_id
       << " _type: " << static_cast<int>(rhs._type)
       << " _productprice: " << rhs._productprice
       << " _productBrand: " << rhs._productBrand
       << " _origin: " << static_cast<int>(rhs._origin)
       << " _productTaxAmount: " << rhs._productTaxAmount;
    return os;
}

Product::Product(std::string product_id, ProductType type, float productprice, std::string productBrand, ProductOrigin origin, float productTaxAmount)
            : _product_id(product_id), _type(type), _productprice(productprice), _productBrand(productBrand), _origin(origin),_productTaxAmount(productTaxAmount)
{
    productTaxAmount = 0.05* productprice; 
}
