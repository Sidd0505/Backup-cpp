#include<iostream>
#include"Train.h"
using namespace std;

int main()
{
    Train arr[5];
    int trainsize =5;
    arr[0].createtrain(101,"Shatabdi1","Delhi","Nagpur",102,AC3TIER,2000);
    arr[1].createtrain(102,"Shatabdi2","Delhi","Nashik",200,NORMAL,2000);
    arr[2].createtrain(103,"Shatabdi3","Delhi","Satana",200,AC2TIER,2000);
    arr[3].createtrain(104,"Shatabdi4","Delhi","Punjab",200,AC1TIER,2000);
    arr[4].createtrain(105,"Shatabdi5","Delhi","Dehradun",200,GENERAL,2000);

    int choice;
    do
    {
        cout<<"Welcome to booking.";
        cout<<"1.Display"<<endl;
        cout<<"2. Search Train "<<endl;
        cout<<"3. Book seats"<<endl;
        cout<<"4.Exit"<<endl;
        cout<<"Enter your choice :";
        cin>>choice;

        switch (choice)
        {
            case 1: 
                {
                    for(int i=0;i<trainsize;i++)
                    {
                        arr[i].display();
                    }
                    break;
                }
                
            case 2:
            {
                int train_number;
                cout<<"Enter the train number to search :";
                cin>>train_number;
                searchtrain(train_number,arr,trainsize);
                break;
            }
            case 3:
            {
                int traintobook,seattobook;
                cout<<"Enter the train to book :";
                cin>>traintobook;
                cout<<"Enter seat to book :";
                cin>>seattobook;
                for(int i=0;i<5;i++)
                {
                    if(arr[i].gettrainno()==traintobook)
                    {
                       arr[i].bookseats(seattobook);
                       break;
                    }
                    break;
                }

            }

            case 4:
                break;

            default:
                cout<<"Enter the correct number."<<endl;

        }
        
    } while (choice!=4);
}
