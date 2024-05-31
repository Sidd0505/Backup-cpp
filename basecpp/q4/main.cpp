#include "header.h"

void searchproducttype(Product obj[], ProductType p)
{
    for (int i = 0; i < 3; i++)
    {
        if (obj[i].product_type == p)
        {
            // std::cout << "Found" << std::endl;
            std::cout << obj[i];
        }
    }
}

void searchproductbybrand(Product obj[], char brand[20])
{
    for (int i = 0; i < 3; i++)
    {
        if (strcmp(obj[i].brand, brand))
        {
            // std::cout << "Found" << std::endl;
            std::cout << obj[i];
            // break;
        }
    }
}

void searchproductbyid(Product obj[], int pid)
{
    for (int i = 0; i < 3; i++)
    {
        if (obj[i].productId == pid)
        {
            // std::cout << "Found" << std::endl;
            std::cout << obj[i];
        }
    }
}

void displayproductwithhighestprice(Product obj[])
{
    int max = 0;

    for (int i = 0; i < 3; i++)
    {
        if (obj[i].price > max)
        {
            max = obj[i].price;
        }
    }
    std::cout << "Highest price : " << max << std::endl;
}
void calculateaverageprice(Product obj[])
{
    int avg = 0;
    int sum = 0;

    for (int i = 0; i < 3; i++)
    {
        if (obj[i].price != 0)
        {
            sum += obj[i].price;
        }
    }
    avg = sum / 3;
    std::cout << "Highest price : " << avg << std::endl;
}

void calculate_total_tax_ammount(Product obj[])
{
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        sum += obj[i].taxammount;
    }
    std::cout << "The tax amound is : " << sum << std::endl;
}

int main()
{
    Product pobj[3];
    int index = 0;
    pobj[index].productId = 1001;
    pobj[index].name = "Iphone";
    strcpy(pobj[index].brand, "iphone");
    pobj[index].price = 50000;
    pobj[index].product_type = MobilePhone;
    pobj[index].taxammount = 50;
    index++;
    pobj[index].productId = 1002;
    pobj[index].name = "Asus";
    strcpy(pobj[index].brand, "Asus");
    pobj[index].price = 40000;
    pobj[index].product_type = Laptop;
    pobj[index].taxammount = 100;
    index++;
    pobj[index].productId = 1003;
    pobj[index].name = "Airtel";
    strcpy(pobj[index].brand, "Tv");
    pobj[index].price = 55000;
    pobj[index].product_type = Tv;
    pobj[index].taxammount = 50;

    int ch, search;
    std::string name;
    char brand[20];
    // float p;
    int p;
    float taxamount;

    while (1)
    {
        std::cout << "MENU" << std::endl;
        std::cout << "1> Display all product object" << std::endl;
        std::cout << "2> Search product by type" << std::endl;
        std::cout << "3> Search product by brand" << std::endl;
        std::cout << "4> Search product by id" << std::endl;
        std::cout << "5> Display product whose price is highest" << std::endl;
        std::cout << "6> Display average price" << std::endl;
        std::cout << "7> Display total tax ammount to be paid" << std::endl;
        std::cout << "8> Exit" << std::endl;
        std::cout << "Enter your choice : " << std::endl;
        std::cin >> ch;
        switch (ch)
        {
        case 1:
            for (int i = 0; i < 3; i++)
            {
                std::cout << pobj[i] << std::endl;
            }

            break;
        case 2:
            std::cout << "Enter product type 1> MobilePhone 2> laptop 3> tv : " << std::endl;
            std::cin >> p;
            if (p == 1)
            {
                searchproducttype(pobj, MobilePhone);
            }
            if (p == 2)
            {
                searchproducttype(pobj, Laptop);
            }
            if (p == 3)
            {
                searchproducttype(pobj, Tv);
            }

            break;
        case 3:
            std::cout << "Enter product brand : " << std::endl;
            std::cin >> brand;
            searchproductbybrand(pobj, brand);
            break;
        case 4:
            std::cout << "Enter product id : " << std::endl;
            std::cin >> p;
            searchproductbyid(pobj, p);
            break;
        case 5:
            displayproductwithhighestprice(pobj);

            break;
        case 6:
            calculateaverageprice(pobj);
            break;
        case 7:
            calculate_total_tax_ammount(pobj);
            break;
        case 8:
            exit(0);
        default:
            std::cout << "Wrong Choice : " << std::endl;
            break;
        }
    }
    return 0;
}
