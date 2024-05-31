#include<iostream>
#include"header.h"
#include<cstring>

Inventory::Inventory()
{

}

Inventory::Inventory(std::string de_of_pr, int bstock, int pcode)
{
    description_of_product = de_of_pr;
    balancestock = bstock;
    productcode = pcode;
}
std::string Inventory::getvalue(std::string depr)
{
    return depr;
}

int Inventory::get(int balancestck)
{
    return balancestck;
}

int Inventory::getter(int prcode)
{
    return prcode;
}

std::ostream& operator<<(std::ostream &os, Inventory i)
{
    os<<"description of product :"<<i.description_of_product;
    os<<"Balance stock is :"<<i.balancestock;
    os<<"Product code is :"<<i.productcode;
}

void purchase(Inventory i)
{
    int m,n;
    std::cout<<"Enter the product code you want to purchase :";
    std::cin>>m;
    while(1)
    {
        if(m==1|| m==2 || m==3)
        {
            break;
        }
        std::cout<<"Product not ";
    }

}

void sale(Inventory i)
{
    
}

void search()
{
    int n;
    std::cout<<"Enter product no. to search :";
    std::cin>>n;
    for(int k=0;k<3;k++)
    {
        if(i >= productcode)
    }

}