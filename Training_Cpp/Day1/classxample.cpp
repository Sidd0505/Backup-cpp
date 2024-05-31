#include<iostream>
#include<cstring>

class Product{

    int product_id;
    char *name;

    public:
    Product()
        {
            product_id = 1023;
            name = new char[20];
            strcpy(name,"Laptop");
        }
    ~Product()
    {
        std::cout<<"\nThe memory is being cleared ......\n";
        delete name;
    }

    void display()
    {
        std::cout<<"\nProduct_Id is :"<<product_id;
        std::cout<<"\nThe name of the product is :"<<name;
    }
};

int main()
{
    std::cout<<"Hello"<<std::endl;
    Product *p =new Product();
    p->display();
    delete p;
    std::cout<<"\nThe result after freeing the memory is \n";
    p->display();
    return 0;
}