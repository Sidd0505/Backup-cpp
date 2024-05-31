#include"Car.h"



std::ostream &operator<<(std::ostream &os, const Car &rhs) {
    os << "_id: " << rhs._id
       << " _model: " << rhs._model
       << " _price: " << rhs._price
       << " _engine: " << *(rhs._engine.get());
    return os;
}

//reference wrapper ke andar smart pointer hai uske andar object hai so first use get that 
// will get us smart pointer address then dereference it to get object  z