#include<iostream>
#include<vector>
#include<functional>

/*
    perspective
    |   |   |           std::reference_wrapper<int> ref = n1;
    a) Compiler  

    Instantiating via assignment a new object called ref. Data 
    type of ref is std::reference

*/






void Magic(std::reference_wrapper<int> n1)
{
    std::cout<<"Address of n1 in magic"<<&(n1.get())<<"\n";
    std::vector<std::reference_wrapper<int> >v1{ n1};    //we store n1 wrapper in vector v1

}

int main()
{
    int n1 =10;
    std::cout<<"THe Address of n1 in Main :"<<&n1<<"\n";
    Magic(n1);
}


//reference wrapper stores pointer inside
//reference wrapper can be implicitly converted into reference.


//raw references problem
/*
    no storage
    no container 
    cant pass reference to reference 
    no * used in raw for dereferencing
*/


// how do reference wrapper solve your problems
/*
no memory - wrapper has box
it physically exist we can pick it from memory so we can make container, array from it
convert it into raw referecne
same for *
*/
