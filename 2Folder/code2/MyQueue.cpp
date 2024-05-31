#include <iostream>
#include "MyQueue.h"
#include <cstring>

MyQueue::MyQueue(int sz)
{
    size = sz;
    front = -1;
    rear = -1; 
    ptr = new int[size];
}
void MyQueue::push(int c)
{
    if (rear == size - 1)
    {
        throw rear;
    }
    else
    {
        ptr[++rear] = c;
        display();
    }
}
void MyQueue::pop()
{
    if (front == rear)
        throw 'u';
    else
        std::cout << ptr[++front] << "removed\n";
    display();
}

void MyQueue::display()
{
    for (int i = front + 1; i <= rear; i++)
        std::cout << "elements are: \n" << ptr[i];
}
