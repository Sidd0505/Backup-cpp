#include <iostream>
#include <cstring>
using namespace std;

class Product
{
    // data members/attributes/
    int modelno;
    char name[20];
    double price;

public:
    // member functions
    Product() // default constructor
    {
        modelno = 10111;
        strcpy(name, "Yash");
        price = 55000;
    }

    // parameterized constructor
    Product(int no, const char *nm, double b) : modelno(no), price(b)
    {
        strcpy(name, nm);
    }
    void display()
    {
        cout << "Model no is :" << modelno<<endl;
        cout << "Name is :" << name<<endl;
        cout << "Price is :" << price<<endl;
    }

     Product(const Product &p3)
    {
        modelno = p3.modelno;
        pname = new char[strlen(p3.name)+1];
        strcpy(pname,p3.name);
        price = p3.price;
    }

    bool compare(Product &p3)
    {
        if(price ==p3.price)
            return true;
        else
            return false;
    }

};

int main()
    {
        // create object/instance
        Product p1(1011,"Mobile",45000);
        Product p2(p1);
        // obj.accept();
        Product p4(2-33,"Bag",1000);
     
        p2.display();
        p1.compare(p4);
        if(p1.compare(p4))
            std::cout<<"\n Products have same price";
        else
            std::cout<<"\nProducts have diff price.";
        return 0;
    }