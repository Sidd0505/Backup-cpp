#include"SetOperations.h"

//Add Elements to the Set
void SetOperations::add(int x){
    s.insert(x);
}

//Remove Elements from the Set
void SetOperations::remove(int x){
    s.erase(x);
}

//Check If Given Element is Present in Set
bool SetOperations::check(int x){
    if(s.find(x)!=s.end()){
        return true;
    } else {
        return false;
    }
}

//Display All Elements of the Set
void SetOperations::display(){
    for(int num : s){
        std::cout<<num<<" ";
    }
    std::cout << std::endl;
}