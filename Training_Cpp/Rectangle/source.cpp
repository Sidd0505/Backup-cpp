#include"header.h"
rect::rect()
{
    length=10;
    width = 5;
}
 
rect::rect(int a,int b)
{
    length=a;
    width=b;
}
rect rect:: add(rect &p1){
    rect ans;
     ans.length = length +p1.length;
    ans.width = width +p1.width;
    return ans;
}
rect rect:: sub(rect &p1){
    rect ans;
    ans.length = length -p1.length;
    ans.width = width -p1.width;
    return ans;
}
void rect :: display()
{
    std::cout<<"length="<<length<<"width="<<width;
}