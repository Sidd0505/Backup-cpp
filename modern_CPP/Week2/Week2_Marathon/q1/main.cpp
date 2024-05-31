#include<iostream>
#include<array>

int main()
{
    int a=0,b=0;
    std::cout<<"How many rows and columns do you want :";
    std::cin>>a;
    std::cin>>b;
    
    int arr[a][b];
    for(int i=0;i<a;i++)
    {
        for(int j=0; j<b;j++)
        {
            std::cin>>arr[i][j];
        }
    }

//Display
    for(int i=0;i<a;i++)
    {
        for(int j=0; j<b;j++)
        {
            std::cout<<arr[i][j]<<"\t";
        }
    }



//This is lambda 1
auto f1 = [&](int arr)
    {
        
        int sum1=0;
        int sum2 =0;
        
        for(int j=0;j<2;j++)
            {
                sum1 += arr[0][j];
            }
            std::cout<<sum1<<"\n";
        
        for(int j=0;j<2;j++)
            {
                sum2 += arr[1][j];
            }
            std::cout<<sum2<<"\n";
    };
    f1(arr);
    
//lambda-2
        int max =0;
        int temp =0;
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
            {
                if(arr[i][j]>temp)
                {
                    max = temp;
                    temp = arr[i][j];
                }
            }
        }
    std::cout<<"Max value is :"<<temp;

//Lambda 3
    int square =0;
    int num =0;
    for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
            {
                num = arr[i][j];
                square = num*num;
            }
        }
    std::cout<<"Square of the number is :"<<square;


//Lambda 4
    int max2 =0;
        int temp2 =0;
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<1;j++)
            {
                if(arr[i][j]>temp2)
                {
                    max2 = temp2;
                    temp2 = arr[i][j];
                }
            }
        }
    std::cout<<"Max value is :"<<temp2;


}

/*
auto f1 = [&](int arr[2][2]){
        int sum1=0;
        int sum2 =0;
        //for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
            {
                sum1 += arr[0][j];
            }
            std::cout<<sum1;
        }
        for(int i=0;i<2;i++)
            {
                sum2 += arr[1][j];
            }
            std::cout<<sum2;
}
*/



// arr2d is an array of size 2 where each element is an array of size 2
//     int arr2d[2][2];
//         {10,20},
//         {30,40},
    



    // for(std::array<int,2> row:arr2d){
        
    //     //columns
    //     for(int element :row){
    //         std::cin>>element;
    //     }
    // };
    // for(std::array<int,2>& column:arr2d){

    //     for(int element :column){
    //         std::cin>>element;
    //     }
    // };

    // int elements =0;
    // for(int i=0;i<a;i++)
    // {
    //     for(int j=0; j<b;j++)
    //     {
    //         std::cin>>elements;
    //         for std::array
    //     }
    // }

    // std::cout<<arr2d[2][2]<<"\n";




