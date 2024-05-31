#include<iostream>
#include<cstring>
using namespace std;

class Animal
{
    public:
     string name="Sid";
    //name = "Siddhant";
    virtual void print()
    {
        cout<<"\nThis is base class.\n";
    }

};

class Dog:public Animal
{
    public:
    string name="Rushi\n";

    void print()
    {
        cout<<"\nThis is derived class\n";
    }
};

int main()
{
    Animal d;
    d = Dog();
    cout<<d.name;   //variable la parenthesis det nahi.
    d.print();
}
