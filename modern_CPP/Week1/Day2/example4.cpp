#include<iostream>
#include<memory>
//10 20 30 40 
//malloc or new keyword
//you allocate 16 bytes first then allocate integers
int main()
{
   int* ptr = (int*) malloc(16);//type casted

   //how to write smart pointer
   std::shared_ptr<int[4]> ptr(new int[4]{10,20,30,40});   //it will be on heap memory
}