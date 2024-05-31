#include"bill.h"
#include<cstring>


void find(Bill*arr,char* search){                       //finding the customer
    int i;
    for(i=0;i<3;i++){
        if(strcmp(arr[i].getCustomerinfo().getname() ,search)){
            arr[i].display();
            break;
        }
    }  
   
}

void totalBill(Bill*arr){               //calculating the total bill
    int i; 
    int total=0;
    for(i=0;i<3;i++){ 
        total=total+arr[i].getBillamm();
    }
    std::cout<<"\n\nYour Total Bill is: "<<total;   
}
int main(){ 
    int j; 
    char var[50];
    Bill *arr=new Bill[3]; 

    for(j=0;j<3;j++){
        arr[j].accept();
    }

    for(int i=0;i<3;i++){
        std::cout<<arr[i];
    }

    std::cout<<"\n\nEnter the name of the customer to be searched : ";
    std::cin>>var; 

    find(arr,var);
    totalBill(arr);
}