#include <iostream>
#include <string>
using namespace std;

class Animal {
public:
    string color = "Black";
    
    void makeSound() {
        cout << "Generic animal sound" << endl;
    }
};

class Dog : public Animal {
public:
    string breed = "Labrador";
    
    void makeSound() {
        cout << "Bark, bark!" << endl;
    }
};

int main() {
    Animal a;
    cout << "Color: " << a.color << endl;
    a.makeSound();  // Calls the makeSound method of the base class

    cout << "------------------" << endl;

    Dog d;
    cout << "Color: " << d.color << endl;  // Accessing base class member from derived class object
    cout << "Breed: " << d.breed << endl;
    d.makeSound();  // Calls the makeSound method of the derived class

    cout << "------------------" << endl;

    Animal* ptr = &d;  // Pointer of base class type pointing to derived class object
    cout << "Color: " << ptr->color << endl;  // Accessing base class member using base class pointer
    // ptr->breed;  // This would be an error, as breed is specific to the Dog class
    ptr->makeSound();  // Calls the makeSound method of the base class due to polymorphism

    return 0;
}
