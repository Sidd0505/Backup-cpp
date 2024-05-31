#include "header.h"
std::ostream &operator<<(std::ostream &os, const Product &p)
{
    os << p.productId;
    os << p.name;
    os << p.brand;
    os << p.price;
    if (p.product_type == MobilePhone)
    {
        os << "Mobile ";
    }

    else if (p.product_type == Laptop)
    {
        os << "Laptop";
    }

    else if (p.product_type == Tv)
    {
        os << "Tv";
    }

    os << p.taxammount;
    return os;
}

void Product::accept()
{
    std::cout << "Enter product id : " << std::endl;
    std::cin >> productId;

    std::cout << "Enter product name : " << std::endl;
    std::cin >> name;
    std::cout << "Enter product brand : " << std::endl;
    std::cin >> brand;
    std::cout << "Enter product price : " << std::endl;
    std::cin >> price;
    std::cout << "Enter mobile laptop tv " << std::endl;
    std::string type;
    std::cout << "Enter product  type: " << std::endl;
    std::cin >> type;

    if (type == "Mobile")
    {
        type = MobilePhone;
    }

    else if (type == "Laptop")
    {
        type = Laptop;
    }

    else if (type == "Tv")
    {
        type = Tv;
    }

    std::cout << "Enter product taxammount : " << std::endl;
    std::cin >> taxammount;
    if (price > 1000)
    {
        taxammount = 0.05 * price;
    }
    else
    {
        taxammount = 0;
    }
}

char &Product::operator[](int index)
{
    static char i = 0;
    try
    {
        if (index >= 5)
        {
            throw "Index out of bound";
        }
        else
        {
            return brand[index];
        }
    }
    catch (const char *msg)
    {
        std::cerr << msg << '\n';
    }
    return i;
}

bool Product::operator==(Product &r3)
{
    return this->brand == r3.brand;
}

void Product::operator=(Product &p)
{
}
