/*
    I am creationg a function magic
    It needs to accept one integer "data"

    scenario 1 :
        copy and create duplicated data value to preserve original value inside data and 
        yet perform operations on the copy inside magic


    Scenario 2:
        I have "Temporary" integer which needs to be passed to magic.
        Magic would perform operations like modification on the integer and return the modified value.

        -pass integer rvalue reference and returns modified data by value (scenario 2A)
        - pass integer by value and return by value -->
        int Magic(int data)
        {

        }


        This overload of Magic accepts one integer by rvalue
        reference and returns one integer by value
        an rvalue reference cannot br bound to lvalue  


        #include"employee.h"
        int Magic(int&& data)
        {

        }

        i
        std::shared_ptr<Employee> Magic(std::shared_ptr<employee>&& data)
        {}

        int main()
        {
            Magic(10);
            Magic(Employee(101));
            Magic(std::make_shared<employee>(101));
        }

        **Solution B) --> pass data by value return data by value**
        #include"employee.h"
        int Magic(int&& data)
        {

        }

        i
        std::shared_ptr<Employee> Magic(std::shared_ptr<employee>&& data)
        {}

        int main()
        {
            Magic(10);
            int n1 = 10;
            Magic(n1);
            ////////////////////////
            employee e1 (101);
            Magic(e1);    //e1 is passed by "value"
            
            Magic(std::make_shared<employee>(101));
            std::shared_ptr<Employee>ptr = std::make_shared<Employee>(100);
            Magic(ptr)
        }

        we can also use lvalue reference but we willl miss out on using temporary variable.
*/

