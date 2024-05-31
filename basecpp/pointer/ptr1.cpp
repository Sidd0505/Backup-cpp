#include <iostream>
using namespace std;

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    cout << "The new value of X is :" << *x << "\n";
    cout << "The new value of Y is :" << *y;
}

int main()
{
    int x, y;
    cout << "Give x and y :";
    cin >> x >> y;
    swap(&x, &y);
    // int* x;
    // int *y;
    // cout<<"Give X and Y :";
    // cin>>*x>>*y;
    // swap(*x,*y);
}