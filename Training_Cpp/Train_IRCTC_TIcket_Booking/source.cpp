#include<iostream>
#include"Train.h"
using namespace std;

Train::Train()
{}

void Train::createtrain(int t_no,const string &t_name, const string& fplace,const string& tplace,int seats_available,TravelClass t_class,int d)
{
    train_name = t_name;
    train_no = t_no;
    fromplace = fplace;
    toplace = tplace;
    travel_class = t_class;
    no_of_seats = seats_available;
    travel_class = t_class;
    distance = d;
}

void Train::display()
{
    cout<<"The name of the train is :"<<train_name<<endl;
    cout<<"THe train number is :"<<train_no<<endl;
    cout<<"THe train is from :"<<fromplace<<endl;
    cout<<"THe train is to :"<<toplace<<endl;
    cout<<"THe number of seats avaialble :"<<no_of_seats<<endl;
    cout<<"The travel class is : "<<travel_class<<endl;
    cout<<"he distance between destination is :"<<distance<<endl;
}

int Train::gettrainno()
{
    return train_no;
}

void searchtrain(int train_no,Train arr[],int trainsize)
{
    bool found = false;
    for(int i=0;i<trainsize;i++)
    {
        if(arr[i].gettrainno()==train_no)
        {
            found = true;
            arr[i].display();
            break;
        }
        
    }
    if(!found)
    {
        cout<<"The train with this number not found"<<endl;
    }
}
void Train::bookseats(int seatstobook)
{
    if(seatstobook <= no_of_seats)
    {
        no_of_seats -=seatstobook;
       int  d = Train::calculatefare();
        cout<<"The toal fare of the tickets are :"<<d*seatstobook;

    }
    else
    {
        cout<<"The seats to book are greater"<<endl;
    }
}
int Train::calculatefare()
{
    if(distance>800 && distance <1000)
        return 800;
    if(distance>1000 && distance<1500)
        return 1000;
    if(distance>1500)
        return 1500;
    else
        return 2000;
}