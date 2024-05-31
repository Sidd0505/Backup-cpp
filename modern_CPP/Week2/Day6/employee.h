#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class employee
{
private:
    int _id;
public:
    employee() {}
    employee(int id):_id(id){}

    void setId(int id)  {_id = id;}
    ~employee() {}
};

#endif // EMPLOYEE_H
