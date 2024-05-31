#include<iostream>
#include<vector>
#include<optional>
//optional use is incase if for example container is returnining something or is empty

void TakeInput(std::vector<int>& data, int N)
{
    int val =-1;
        // while(N>0)
        // {
        //     std::cin>>val;

        //     data.push_back(val);
        //     N--;
        // }

        for(int i=0;i<N;i++)
        {
            std::cin>>val;
            data[i] = val;
        }
}

/*
    Identify even numbers from data. store all of them in result
    return result


    Scenario 1: there is at least 1 even number in data.
                you identify the number/s. store in result

    Scenarion 2: data is empty. handled by raising exception

    Scenarion 3: data is not empty. However, all numbers are ODD



*/

//ReturnEvenNumbers MAY OR MAY NOT RETURN A VALUE
// A vector of integers
std::optional< std::vector<int>> ReturnEvenNumbers(std::vector<int>& data){
    if(data.empty())
    {
        throw std::runtime_error("THe data is empty.");
    }

    std::vector<int>result;

    for(int v : data)
    {
        if(v % 2 ==0)
        {
            result.push_back(v);
        }
    }

    if(result.empty())
    {
        return std::nullopt; //nullopt is a symbol to indicate no value
    }

    return result;
}

int main()
{
    int N = -1;

    std::cin>>N;

    //U can make advanced resevation in vector
    std::vector<int>v1(N);  //space for Nintegers is now reserved on the heap

   // std::vector<int>data;

    TakeInput(v1, N);

   std::optional<std::vector<int>> even_numbers = ReturnEvenNumbers(v1);
   /*
        has_value return false if optional wrapper contains nullopt
   */

  //  std:::cout<<even_numbers.size();
  if(even_numbers.has_value()){

    /*
        We onlycome inside if when has_value return true 
        i.e. valid value is present
        i.e. container of even numbers is found in optional 
    */
    std::cout<< even_numbers.value().size();
  }

  else {
    std::cout<<"Vector returned no values\n";
  }
}

//empty value, null pointer execption leads to segmentation fault so for which we use optional keyword