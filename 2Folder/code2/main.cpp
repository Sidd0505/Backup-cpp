#include <iostream>
#include"MyQueue.h"
// #include<cstring>

int main()
{
    int sz, ch, x;
    std::cout << "Enter Queue size: ";
    std::cin >> sz;
    MyQueue s(sz);
    try
    {
        do
        {
            std::cout << "Enter choice : \n1. push\n 2.pop\n 3.display\n4.exit";
            std::cin >> ch;
            switch (ch)
            {
            case 1:
                std::cout << "enter no: "; /* constant-expression */
                /* code */
                std::cin >> x;
                s.push(x);
                break;
            case 2:
                s.pop(); /* constant-expression */
                /* code */
                break;
            case 3:
                s.display(); /* constant-expression */
                /* code */
                break;
            case 4:
                return 0;
                /* code */
                break;
            default:
                std::cout << "Enter prpoper choice: ";
            }
        } while (1);
    }
    catch (int a)
    {
        if (a == s.getSize() - 1)
            std::cout << "Overflow";
    }
    catch (char c)
    {
        if (c == 'u')
            std::cout << "Underflow";
    }
    return 0;
}

