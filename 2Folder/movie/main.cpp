#include <iostream>
#include <string.h>
#include "Movie.h"

int main(){
    Movie m[5];
    std::string mCast[] =  {"Kajal","abhi"};
    m[0] = Movie("Ishq",102,MovieRatings::UA,"rohit shetty",240,mCast);
    showMenu(m);
}