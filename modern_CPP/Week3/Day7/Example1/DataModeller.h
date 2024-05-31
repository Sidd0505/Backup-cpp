#ifndef DATAMODELLER_H
#define DATAMODELLER_H

#include"Employee.h"
#include"BusinessOwner.h"
#include<vector>
#include<variant>
#include<memory>


using BusinessPointer = std::unique_ptr<BusinessOwner>;
using EmpPointer = std::unique_ptr<Employee>;
using VType = std::variant<BusinessPointer, EmpPointer>;

class DataModeller{

    private:
    VType _instance;
    std::vector<float>_goodsPrices;

    public:
    DataModeller(VType v, std::vector<float>& prices);
    DataModeller(std::string name, EmployeeType type, float salary);
    DataModeller() = delete;
    DataModeller(const DataModeller&) = delete;
    DataModeller(DataModeller&&) = delete;
    DataModeller& operator= (const DataModeller&)= delete;
    DataModeller& operator= (const DataModeller&&) = delete;

    ~DataModeller()= default;

    const VType& instance() const { return _instance; }

    std::vector<float>goodsPrices() const { return _goodsPrices; }

    void operator()();
};
#endif // DATAMODELLER_H
//getter is not allowing by value original can be return by reference

//constant object can call getter

//how to make your data immmuable?

//line 22 vector need lvalue reference it will nit accept rvalue 