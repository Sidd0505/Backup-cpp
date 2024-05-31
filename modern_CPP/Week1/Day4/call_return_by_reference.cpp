#include <iostream>
//if there is datatype at the left of the &, it indicates the refrence of that data type
//refering the ata by alternate name --> reference (Alias)
//single & is lvalue return 
//double && is rvalue return in cpp
int& Magic(int& n1)   //we have to decide here call by reference or value?
{
    std::cout << "Address of data in the function :" << &n1 << "\n";
    n1 = 1;
    int ans = n1 * 100;
    return ans;     
    //return n1 *100;  

}
//return type is int& means returning the reference.
//this gives error because local variable went out of scope immediately.
//if we remove the return by reference we can get output 

int main()
{
    // data variable intitialized with value 20
    int data = 20;

    // Address of data can be determined because data is lvalue.
    std::cout << "Address of data in the main :" << &data << "\n";

    // Resulrt stores the return "value" from the Magic called with "data" passed by value
    int result = Magic(data);    //passing is same as call by value
    std::cout<<result;
}