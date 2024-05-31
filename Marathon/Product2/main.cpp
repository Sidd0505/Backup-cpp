#include<iostream>
#include"header.h"
int main()
{
    Inventory *inv=new Inventory[3];
    inv[1].accept();
    
    purchase(inv);                      //We purchase here
    std::cout<<inv[1];
    
    sale(inv);                          //we sale here
    std::cout<<inv[0]<<"\n";
    search(inv);
    
    delete inv;               
    return 0;
}