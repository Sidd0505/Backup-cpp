//smart pointers
#include<iostream>

#include"Vehicle.h"
#include"VehicleType.h"
#include<memory>   //this is where smart pointers are 

int main()
{
    //initializing and declaring at the same time of smart pointer
    std::shared_ptr<Vehicle> ptr = std::make_shared<Vehicle>
    ("V101",
    "City",
    1345.0f,
    VehicleType::PERSONAL
    );  //<vehicle> is a class name
    //now we dont have to free the memory compilr will do it automatically
}

//destructor phle run hota hai memory actually free uske baad hota hai (os level pe)

/*
    RAII : Resource Acquisition Is Initialization

    1) When we acquire resource, something is initialized
    
    2) If you want to acquire resource then I must acquire it 
        while initializing "something"

    File f1 = open()  f1 is getting intialized

*/