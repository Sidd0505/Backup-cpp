#include <iostream>
#include "header.h"
 
int main() {
    Book bookObj;
    // std::cout << "Enter details for the book:\n";
    // bookObj.accept();
    // std::cout << "Details of the book:\n" << bookObj << "\n";
 
    Book pile[2];
    for(int i=0;i<2;i++){
        pile[i].accept();
    }
    std::cout<<bookObj;
    calculateAvg(pile, 2, BookCategory::FICTION);
 
    return 0;
}