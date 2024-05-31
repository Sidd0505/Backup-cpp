#include "Functionalities.h"

int main(){

    Container arr{6,7,8,9,10};
    FContainer Fn { PrintOddNumbers, 
                    CountOfNumberDivisibleby4,
                    SumOfElements,
                    MinElementOfContainer
                };
    Operation(Fn, arr);
}

