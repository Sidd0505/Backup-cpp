#include<iostream>


class MyClass{
    private:
    int _id;
public:
    
    MyClass() = default;
    MyClass (MyClass&&) = default;
    MyClass(const MyClass &) {std::cout<<"Copy Cnstr Called!!!";};
    MyClass &operator = (MyClass&&) = default;
    MyClass &operator =(const MyClass &) = default; 

    ~MyClass() = default;

    int id() const { return _id; }

    MyClass(int id) : _id(id){}
};

//step 4: signature is matched and magic is invoked
MyClass Magic(MyClass& obj){
    //step 5: temp pbject is instantiated by ""
    MyClass temp(obj);

    //step 6: address of temp is printed
    std::cout<<"Address of obj is :"<<&temp<<"\n";

    //step 7: temp is returned by value. 
    return temp;
    
};
//now temp is rvalue
/*
    Here temp is in the stack of magic function

    scope of temp  --> until the magic is destroyed 

*/

int main()
{
    //step 1: obj is instantiated
    MyClass obj(100);
    
    //MyClass obj;
    //step 2: address is printed(obj is in the stack of main function)
    std::cout<<"\n"<<"Address of obj is :"<<&obj<<"\n";

    //step 3: Call magic function. whatever is returned from magic will be saved in 
    //return_obj variable
    MyClass return_obj = Magic(obj);
    /*
        Here why there is no need of copy constuctor becoz of thr
        rvalue assignment is on (on line 12)

    */
    std::cout<<"Address of return_obj is :"<<&return_obj<<"\n";
}


//magic takes 1 non const lvalue ref to myclass and return my class by value


//if I am passing one lvalue reference to somthing then we are invoking the Copy Constructor.

/*
    Our compiler will directly move the temp to return_obj without user's consent.
*/

/*
Side effect --> any operation u perform which is an extra operation in copy cnstr it is called
side effect

Dont :
dont create file, obj 
dont write logic 
do not put any meaningful steps in copy if compiler ignores the copy then the code will not 
run becoz compiles has avoided it.

*/
