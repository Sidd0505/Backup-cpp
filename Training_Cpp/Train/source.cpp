#include<iostream>
#include"Train.h"

// Train();
//     void createtrain(std::string&, int,int,TravelClass,std::string&,std::string&,int); 
//     int calculatefare(int distance);
// };

// bool searchtrain(int,Train arr);

Train::Train()
{
    //Default Constructor
}

void Train::createtrain(const std::string& t_name, int t_no ,int available_seats,TravelClass Tclass,const std::string& fplace,const std::string& tplace,int dist)
{
    train_name = t_name;
    train_no=t_no;
    available_no_of_seats = available_seats;
    toplace = tplace;
    fromplace = fplace;
    distance = dist;
} 

int Train::gettrainno()
{
    return train_no;
}

void searchtrain(int train_no,Train arr[5], int trainsize)
{
    bool found=false;
    for(int i=0;i<trainsize;i++)
    {
        if(arr[i].gettrainno() == train_no)
        found = true;
        arr[i].display();
    }
}
void Train::display()
{
    std::cout<<"Train name"<<train_name<<std::endl;
    std::cout<<"Train number"<<train_no<<std::endl;
    std::cout<<"Available seats"<< available_no_of_seats<<std::endl;
    std::cout<<"Travel class"<< travel_class<<std::endl;
    std::cout<<"from place"<<fromplace<<std::endl;
    std::cout<<"To place"<< toplace<<std::endl;
    std::cout<<"Distance"<< distance<<std::endl;
}

