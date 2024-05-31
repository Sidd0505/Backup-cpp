#include<iostream>
#include<vector>


void magic(int& ref2){
  //same meaning as line no 22
}

int main()
{
    int n1 =10;
    int &ref1 = n1;   //ref1 is alternate name for n1
    /*
        arr is an array of size 1
        arr can store integer lvalue reference
    */
    //int& arr[1] {ref1};     //we have to put real objects in array there is no size of ref1, reference does not have its own value

   // std::vector <int&> v1{ref1}   //this is wrong
    //we can't put references in container

    int& ref2 = ref1;   
    /*
    if we try to make reference of reference we end up creating the another 
    name for original data only.
    */

   /*
        1)reference physically don't exist!
            - they have no storage(no memory allocated)
            - they won't have their own address
        2) reference cannot be put in a container

        3) Reference of a reference does not work as intended

        4) 
   */

   magic(ref2)







}