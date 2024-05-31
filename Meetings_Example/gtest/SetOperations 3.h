#ifndef SETOPERATIONS_H
#define SETOPERATIONS_H

#include <iostream>
#include <set>
#include <memory>
#include <algorithm>

//Class for Set Operations
class SetOperations {
    private:
        std::set<int> s;

    public:
        void add(int x);
        void remove(int x);
        bool check(int x);
        void display();
};

#endif // SETOPERATIONS_H
