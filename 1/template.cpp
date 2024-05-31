#include<iostream>

template<class T>   //T is the type classifier
void exchange(T &a, T &b)
{
    T t;
    t = a;
    a = b;
    b = t;
}

template<class T>
void sort(T arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            // If the element found is greater than the next element, swap them
            if (arr[j] > arr[j+1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}


int main()
{
    int n1 =10, n2 = 20;
    exchange(n1,n2);
    std::cout<<"\n n1 = "<<n1<<"\n n2="<<n2;
    int arr[5]={10,6,4,8,9};
    sort(arr,5);
    for(int i=0;i<5;i++)
    {
        std::cout<<"\n"<<arr[i]<<" ";
    }
    return 0;
}
