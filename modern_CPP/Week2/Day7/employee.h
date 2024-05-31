#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <ostream>

class employee
{
private:
    int _id;
public:
    employee() {}
    employee(int id):_id(id){};

    void setId(int id)  {_id = id;}
    ~employee() {}

    friend std::ostream &operator<<(std::ostream &os, const employee &rhs);
};

#endif // EMPLOYEE_H
