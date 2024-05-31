#ifndef CAR_H
#define CAR_H

#include<iostream>
#include<functional>
#include"Engine.h"
#include<memory>

using Pointer = std::shared_ptr<Engine>;
using RefType = std::reference_wrapper<Pointer>;

class Car
{
private:
    int _id;
    std::string _model;
    float _price;
    RefType _engine;

public:
    Car(int id, std::string model, float price, RefType engine);
    int id() const { return _id; }
    void setId(int id) { _id = id; }
    std::string model() const { return _model; }
    void setModel(const std::string &model) { _model = model; }
    float price() const { return _price; }
    void setPrice(float price) { _price = price; }
    friend std::ostream &operator<<(std::ostream &os, const Car &rhs);
    
    ~Car()=default;

    RefType engine() const { return _engine; }
    void setEngine(const RefType &engine) { _engine = engine; }
};


#endif // CAR_H
