

#ifndef MYQUEUE_H
#define MYQUEUE_H

#include <iostream>

class MyQueue
{
    int size;
    int front;
    int rear;
    int *ptr;

public:
    // MyQueue(/* args */);

    // ~MyQueue();

    void push(int c);
    void pop();
    void display();
    MyQueue(int sz);
    ~MyQueue() {}

    int getSize() const { return size; }
    void setSize(int size_) { size = size_; }
};

#endif // MYQUEUE_H
