#ifndef DEPARTMENT_H
#define DEPARTMENT_H

#include <iostream>

class Department
{
private:
    std::string _id;
    int _size;

public:
    Department() = delete;
    Department(const Department&) = delete;
    Department(Department&&) = delete;
    Department& operator=(const Department&) = delete;
    Department& operator=(Department&&) = delete;
    ~Department() = default;

    Department(std::string id,int size);

    std::string id() const { return _id; }

    int size() const { return _size; }
};

#endif // DEPARTMENT_H
