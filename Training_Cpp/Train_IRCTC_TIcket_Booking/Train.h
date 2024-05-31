#include<iostream>
#include<cstring>

enum TravelClass
{
  AC3TIER,NORMAL,AC2TIER,AC1TIER,GENERAL
};
class Train
{
  int train_no;
 
  std::string train_name;
  std::string toplace;
  std::string fromplace;
  int no_of_seats;
  TravelClass travel_class;
  int distance;

  public:
  void display();
  int gettrainno();
  Train();
  void createtrain(int,const std::string &, const std::string&,const std::string&,int,TravelClass,int );
  void bookseats(int);
  int calculatefare();
};

void searchtrain(int,Train arr[],int);