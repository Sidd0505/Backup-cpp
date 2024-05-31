#include<iostream>
#include"header2.h"

int Flight::objs = 0;

int main(){
    int num,choice,i=0;
    long search_flino;
    std::cout<<"Enter Number of Flights: ";
    std::cin>>num;
    Flight *arr = new Flight[num];

    while(1){
        std::cout<<"\n1. Add Flight\n2. Display Flights\n3. Search Flight\n4. Display Current\n5. Exit\nEnter Your Choice: ";
        std::cin>>choice;
        switch(choice){
            case 1: // Flight Details
                if(i<num){
                    arr[i].feedInfo();
                    i++;
                }else std::cout<<"Flights Full\n";
                break;
            case 2: //Display All Flights
                if(i!=0){
                    for(int j=0;j<i;j++){
                        arr[j].showInfo();
                    }
                }else std::cout<<"No Flights Here\n";
                break;
            case 3: //Search for a flight
                std::cout<<"Enter Flight Number: ";
                std::cin>>search_flino;
                search(arr,search_flino,i);
                break;
            case 4:
                Flight::calculateTotalFlightObjects(); //Display total flights
                break;
          case 5:                             
              
             exit(0);
            default:
                std::cout<<"input not match\n";
                break;
        }
    }
    
    return 0;
}