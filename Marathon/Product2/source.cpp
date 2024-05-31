#include<iostream>
#include"header.h"
//Default constructor
Inventory::Inventory()
{
    descricption_of_product="Laptop";
    Balancestock=100;
    Productcode=1;
}
void Inventory::accept()
{
    std::cout<<"Enter Description ";
    std::cin>>descricption_of_product;
    std::cout<<"Enter Stock ";
    std::cin>>descricption_of_product;
    std::cout<<"Enter Product no.: ";
    std::cin>>descricption_of_product;
}
std::string Inventory::get_desc()                           //GETTER FUNCTION
{
    return descricption_of_product;
}
Inventory::Inventory(std::string d, int b, int p)           //PARAMETRIZED CONSTRUCTOR
{
    descricption_of_product=d;
    Balancestock=b;
    Productcode=p;
}
int Inventory::get_balance()                    //GET FUNCTION FOR BALANCE
{
    return Balancestock;
}
int Inventory::get_code()                       //GETTER FUNCTION FOR PRODUCTCODE
{
    return Productcode;
}
void Inventory::set_balance(int n)              //SETTER FUNCTION FOR BALANCE STOCK
{
    Balancestock+=n;
}
void purchase(Inventory *i1)                    //PURCHASE CODE
{
    
    int m,n;
    std::cout<<"Enter the Product no. to purchase: ";
    std::cin>>m;
    while (1)
    {
        if(m==1||m==2||m==3)
        {
            break;
        }
        std::cout<<"Product not present. Enter correct value\n";
    }
    std::cout<<"Enter no. of units to be purcahsed: ";
    std::cin>>n;
    for (int i = 0; i < 3; i++)
    {
        if(i1[i].Productcode==m)
        {
            i1[i].set_balance(n);
        }
    }
}
void Inventory::set_balancem(int n)
{
    Balancestock-=n;
}

void sale(Inventory* i1)                                //SALE FUNCTION CODE
{
    int m,n;
    std::cout<<"Enter the Product no. to sale: ";
    std::cin>>m;
    while (1)
    {
        if(m==1||m==2||m==3)
        {
            break;
        }
        std::cout<<"Product not present. Enter correct value\n";
    }
    std::cout<<"Enter no. of units to sale: ";
    std::cin>>n;
    for (int i = 0; i < 3; i++)
    {
        if (i1->Productcode==m && (i1->Balancestock-n)<20)          //CONDITION 20
        {
            std::cout<<"Minimum Balance stock must be 20\n";
            break;
        }
        
        if (i1->Productcode==m)
        {
            i1->set_balancem(n);
            break;
        }
    }
}

void search(Inventory* i1)                      //SEARCH fUNCTION CODE
{
    int id;
    std::cout<<"Enter Product no. to search: ";
    std::cin>>id;
    int k;
    for ( k = 0; k < 3; k++)
    {
        if (i1[k].Productcode==id)
        {
            std::cout<<i1[k].descricption_of_product;
            break;
        }
        
    }
    if(k==3)
        std::cout<<"Not found\n";
    
}

std::ostream &operator<<(std::ostream & os, Inventory i)        //<< CODE OVERLOADED
{
    os<<"Description of Product: "<<i.descricption_of_product<<"\n";
    os<<"Balance Stock: "<<i.Balancestock<<"\n";
    os<<"Product Code: "<<i.Productcode<<"\n";
    return os;
}