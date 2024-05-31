//main.cpp

# include<iostream>
using namespace std;

class Flight
{
    long flightNumber;
    float distance;
    float fare;
    static int count;
     float fuel;
    public:
        
        Flight();
        Flight(long,float,float,float);
        void calculateFuelQuantity();
        void FeedInfo();
        void showInfo();
       static int CalculateTotalFightObject();
        long getFlightno();
        void fuelamount(float);
};
int Flight ::count =0;
long Flight::getFlightno()
{
    return flightNumber;
}
void Flight:: fuelamount(float fval)
{
    this->fuel = fval;
}
Flight::Flight()
{
    flightNumber = 0;
    distance = 0.0;
    fare = 0.0;
    count ++;
}
Flight::Flight(long fno,float dis,float fue,float far)
{
    flightNumber = fno;
    distance = dis;
    fuel = fue;
    fare = far;
    count ++;
}
void Flight:: calculateFuelQuantity()
{
    if(distance <= 10000)
    {
        fuel =5000;
        //fuelamount(5000);
    }    
    else if(distance>10000 && distance <=20000)
    {   
        fuel =11000;
       //fuelamount(11000);
    }    
    else if(distance >20000 && distance <=30000)
    {   
        fuel =22000;
         //fuelamount(22000);  
    }   
    else 
    {
         fuel=30000;

    }
       
    

}
void Flight:: FeedInfo()
{   
    count++;
    std::cout<<"Enter the flight number\n";
    std::cin>>flightNumber;
    std::cout<<"enter the distance\n";
    std::cin>>distance;
    std::cout<<"Fare amount";
    std::cin>>fare;
    calculateFuelQuantity();
}   
void Flight:: showInfo()
{
    std::cout<<"The Flight number is -> "<<flightNumber<<std::endl;
    std::cout<<"The distance to traival is -> "<<distance<<std::endl;
    std::cout<<"The fuel required  is -> "<<fuel<<std::endl;
    std::cout<<"The fare amount is ->"<<fare<<std::endl;
}
int Flight:: CalculateTotalFightObject()
{
    return count;
}

int main()
{
    int size = 0,lp = 1,choice,count = 0,flag=0;
    long tempno=0;
    std::cout<<"Enter the number of flights that you want enter \n";
    cin>>size;
    Flight *arr = new Flight[size];
    while(lp)
    {
        std::cout<<"Select 1 for add flight"<<std::endl;
        std::cout<<"Select 2 for display all flight"<<std::endl;
        std::cout<<"Select 3 for search flight"<<std::endl;
        std::cout<<"Select 4 for display current flight object"<<std::endl;
        std::cin>>choice;
        switch (choice)
        {
        case 1:
            if(count == size)
            {
                std::cout<<"The stack is full !!!! \n";
            }
            else
            {
                arr[count].FeedInfo();
                count++;
            }
            
            break;
        case 2:
            if(count == 0)
            {
                std::cout<<"There is no any entry available !!!!!\n";
            }
            else
            {
                for(int i=0;i<count;i++)
                {
                    arr[i].showInfo();
                }
            }
            break;
        case 3:
            
            std::cout<<"Enter the flight number\n";
            std::cin>>tempno;
            for(int i=0;i<count;i++)
            {   flag =0;
                if(arr[i].getFlightno()== tempno)
                {   
                    flag = 1;
                    std::cout<<"The flight numer you have entered is present here";
                    break;
                }
            }
            if(flag == 0)
            {
                std::cout<<"The flight is not present in the list !!!!!\n";
            }
            break;
        case 4:
                arr[count-1].showInfo();
            break;
        case 5:
            std::cout<<"Thank you for using applaction !!!!!!";
            lp = 0;
            break;
        default:
            std::cout<<"Your choice is wrong !!!!!!!! \nRe-enter the cohice";
            break;
        }

    }
    delete []arr;
    return 0;
}