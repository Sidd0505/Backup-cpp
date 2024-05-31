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
        cout << "Account no is :" << accno << endl;
        cout << "Name is :" << name << endl;
        cout << "Balance is :" << balance << endl;
    }
    // void accept();
    int getacc() const
    {
        return this->accno;
    }
};
    bool search(Account a[], int accno)
    {
        for (int i = 0; i < 3; i++)
        {
            if (accno == a[i].getacc())
            {
                return true;
            }
        }
        return false;
    }

    void modify(Account a[], int accno)
    {
        char newname[20];
        for (int i = 0; i < 3; i++)
        {
            if (accno == a[i].getAcc())
            {
                std::cout << "\nEnter new name :";
                std::cin >> newname;
                a[i].setName(newname);
                break;
            }
        }
    }

int main()
{
    Account arr[3] = {{3011, "Heena", 2002.55}, {3012, "Anup", 67000.45}, {3012, "Ganesh", 45000.33}}; // member initializer list
    // create object/instance
    // obj.accept();
   
    bool a =search(arr, 30);
    cout << "\n"
         << a;
    arr[0].display();
    modify(arr, 10111);
    arr[0].display();
}
// or we can do this without obj we can do it by putting fun outof cntr