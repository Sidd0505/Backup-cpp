#include<iostream>
//array and list should have same data type.(the content should have same data type)
//Every array is a pointer

//For primitive data types all the operators are naturally overloaded but for
//artificial data type we need to overload the operators
/*
    0*0
    0*1
    0*2             10
    0*3


    0*4
    0*5
    0*6             20
    0*7


    0*8
    0*9             30
    0*a
    0*b
*/


//one star means jump one memory location
//array needs to be passes as a pointer if u nned to read and write.
void magic(int* arr, int size)
{

    for(int i=0;i<size;i++)
    {
        /*
            *(arr+i) allows compiler to jump into
            a memory location starting from an
            offset of "i" positions from 
            the base address stored in "arr"

            //offset means jump
        */
        
    }
}



int main()
{
    /*
        to go to i location the formula is

        take the base address, add(size) * i;

        e.g.
        0x400H + (4 *2)  = 0x408H
    */
    int arr[3]={ 10, 20, 30};


}