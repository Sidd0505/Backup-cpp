#include "Functionalities.h"

int num1 = 0;
int num2 = 0;
bool flag = false;
std::condition_variable cv;
std::mutex mt;


void GlobalNumbersSum(){
    std::unique_lock<std::mutex> ul(mt);
    cv.wait( ul, [](){ return flag; } );
    std::cout << "Sum is :" << num1 + num2 << "\n";
}


void SumOfNNumbers(int N)
{
    int result = 0;
    for (int i = 0; i < N; i++)
    {
        result += i;
    }
    mt.lock();
    std::cout << "Sum Of First "<<N<<" Numbers are :"<<result<<"\n";
    mt.unlock();
}

void OddNumbersDisplayFunction(std::vector<int> v){
    
    std::lock_guard<std::mutex> lk(mt);
    std::cout << "Vector of odd numbers : \n";
    for(int val : v){
        if (val%2 == 1)
        {
            std::cout << val << " ";
        }
        
    }
    std::cout << "\n";
}


void InstantiateThreads(
    std::array<std::thread, 3>& arr,
    std::function< void() > f1,
    std::function< void(int) > f2,
    std::function< void(std::vector<int>)> f3,
    int N,
    std::vector<int> vec){
    
        arr[0] = std::thread(f1);
        arr[1] = std::thread(f2, N);
        arr[2] = std::thread(f3, vec);

        for(std::thread& t : arr){
        if(t.joinable()){
            t.join();
        }
    }
}


int main(){
    std::cin >> num1 >> num2;
    flag = true; 
    cv.notify_one();
    std::array<std::thread, 3> arr;
    int N = 5;
    std::vector<int> vec{1, 2, 3, 5, 6, 7};
    InstantiateThreads(arr, &GlobalNumbersSum, &SumOfNNumbers, &OddNumbersDisplayFunction, std::ref(N), std::ref(vec));
    
}