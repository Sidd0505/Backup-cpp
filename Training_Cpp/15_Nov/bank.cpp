#include <iostream>

class Account
{
    int balance;

public:
    Account(int b = 5000)
    {
        balance = b;
    }
    void withdraw(int amount)
    {
        if (balance - amount < 300)
            throw "The balance is insufficient\n";
        balance -= amount;
    }
    void display()
    {
        std::cout << balance;
    }
};

int main()
{
    Account A(15000);
    try
    {
        A.withdraw(14000);
    }
    catch (const char *msg)
    {
        std::cout << msg << '\n';
    }
    A.display();
    return 0;
}
