#include <iostream>

int Magic(int n1)
{
    std::cout << "Address of data in the main :" << &n1 << "\n";
    int ans = n1 * 100;
    return ans;
}

int main()
{
    // data variable intitialized with value 20
    int data = 20;

    // Address of data can be determined because data is lvalue.
    std::cout << "Address of data in the main :" << &data << "\n";

    // Resulrt stores the return "value" from the Magic called with "data" passed by value
    int result = Magic(data);
}