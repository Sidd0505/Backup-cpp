#include <iostream>
#include <cstring>
using namespace std;

class Account
{
    // data members/attributes/
    int accno;
    char name[20];
    double balance;

public:
    // member functions
    Account() // default constructor
    {
        accno = 10111;
        strcpy(name, "Yash");
        balance = 55000;
    }

    // parameterized constructor
    Account(int no, const char *nm, double b) : accno(no), balance(b)
    {
        strcpy(name, nm);
    }
    void display()
    {
        cout << "Account no is :" << accno<<endl;
        cout << "Name is :" << name<<endl;
        cout << "Balance is :" << balance<<endl;
    }
    void accept()
    {
        cout << "Account no is :";
        cin >> accno;
        cout << "Name is :";
        cin >> name;
        cout << "Balance is :";
        cin >> balance;
    }
};

int main()
{
    // if we want to declare multiple objects then use array
    Account arr[3] = {{3011, "Heena", 2002.55}, {3012, "Anup", 67000.45}, {3012, "Ganesh", 45000.33}};  //member initializer list
    for (int i = 0; i < 3; i++)
    {
        arr[i].display();
    }

    Account *ptr = new Account(); // new keyword is like malloc
    ptr->display();

    // create object/instance
    Account obj;
    // obj.accept();
    obj.display();
    Account obj2(20122, "Jay", 56000.76);
    obj2.display();

    delete ptr; // here ptr will give address of heap memory and delete will free the heap memory the ptr pointer will get freed when the scope of main will be over then it will empty the stack.
    return 0;
}