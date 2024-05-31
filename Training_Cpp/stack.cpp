
// stack function
 
#include <iostream>
 
 
class stack
{
    int *stackArray;
    int size;
    int top;
 
public:
    stack()
    {
        size = 0;
        stackArray = NULL;
      int *arrayStack=new int[size];  top = 0;
    }
    stack(int *stackArray,int size):stackArray(stackArray),size(size),top(-1)
    {
        
    }
    void push()
    {
        int value = 0;
        std::cout << "Enter the number\n";
        std::cin >> value;
        if (top < size-1)
        {
            stackArray[++top] = value;
            
        }
        else
        {
            std::cout << "The stack is full !!!!!!!\n";
        }
    }
    void pop()
    {
        if (top < size && top >=0)
        {
            std::cout << "The pop element is" << stackArray[top];
            top--;
        }
        else
        {
            std::cout << "The stack is full !!!!!!!\n";
        }
    }
    void Display()
    {
        std::cout << "The number of elements present in the stack are " << top + 1 << "\n";
        for (int i = 0; i <= top; i++)
        {
            std::cout << stackArray[i] << " ";
        }
    }
    ~stack()
    {
        std::cout<<"Destructor called..."<<std::endl;
    }
};
 
int main()
{
    int size = 0;
    
    std::cout << "Enter the stack size \n";
    std::cin >> size;
    int *arrayStack=new int[size];
    stack obj(arrayStack,size);
    int ch;
    while (true)
    {
        std::cout << "MENU" << std::endl;
        std::cout << "1.PUSH" << std::endl;
        std::cout << "2.POP" << std::endl;
        std::cout << "3.DISPLAY" << std::endl;
        std::cout << "Enter your choice" << std::endl;
        std::cin >> ch;
 
        switch (ch)
        {
        case 1:
            obj.push();
            break;
 
        case 2:
            obj.pop();
            break;
 
        case 3:
            obj.Display();
            break;
 
        case 4:
            return 0;
        }
    }
 
    return 0;
}
[8:47 AM] Adesh Narke
// stack function
 
#include <iostream>
 
 
class stack
{
    int *stackArray;
    int size;
    int top;
 
public:
    stack()
    {
        size = 0;
        stackArray = NULL;
      int *arrayStack=new int[size];  top = 0;
    }
    stack(int *stackArray,int size):stackArray(stackArray),size(size),top(-1)
    {
        
    }
    void push()
    {
        int value = 0;
        std::cout << "Enter the number\n";
        std::cin >> value;
        if (top < size-1)
        {
            stackArray[++top] = value;
            
        }
        else
        {
            std::cout << "The stack is full !!!!!!!\n";
        }
    }
    void pop()
    {
        if (top < size && top >=0)
        {
            std::cout << "The pop element is" << stackArray[top];
            top--;
        }
        else
        {
            std::cout << "The stack is full !!!!!!!\n";
        }
    }
    void Display()
    {
        std::cout << "The number of elements present in the stack are " << top + 1 << "\n";
        for (int i = 0; i <= top; i++)
        {
            std::cout << stackArray[i] << " ";
        }
    }
    ~stack()
    {
        std::cout<<"Destructor called..."<<std::endl;
    }
};
 
int main()
{
    int size = 0;
    
    std::cout << "Enter the stack size \n";
    std::cin >> size;
    int *arrayStack=new int[size];
    stack obj(arrayStack,size);
    int ch;
    while (true)
    {
        std::cout << "MENU" << std::endl;
        std::cout << "1.PUSH" << std::endl;
        std::cout << "2.POP" << std::endl;
        std::cout << "3.DISPLAY" << std::endl;
        std::cout << "Enter your choice" << std::endl;
        std::cin >> ch;
 
        switch (ch)
        {
        case 1:
            obj.push();
            break;
 
        case 2:
            obj.pop();
            break;
 
        case 3:
            obj.Display();
            break;
 
        case 4:
            return 0;
        }
    }
 
    return 0;
}