#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
class A
{
	int a;
    public:
	A(){}
};
 
class B: public A
{
	int b;
    public:
	B(){}
};
 
void func()
{
	B b;
	throw b;
}
 
int main()
{
	try{
		func();
	}
	catch(A a){
		cout<<"Caught A Class\n";
	}
	catch(B b){
		cout<<"Caught B Class\n";
	}
}