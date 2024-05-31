#include<iostream>
class Rectangle{
    int length;
    int breadth;
    int peri;
    public:
    int area;
        // int setdimension(int l,int b){
        //     length=l;
        //     breadth=b;
        //     return 0;
        // }
        Rectangle(){
            //std::cout<<"Constructor"<<std::endl;
            length =0;
            breadth =0;
            peri =0;
            area = 0;
        };
        void show(){
            std::cout<<"Len"<<length<<std::endl;
            std::cout<<"Bre"<<breadth<<std::endl;
        }
        void input(){
            std::cout<<"Enter Length:"<<std::endl;
            std::cin>>length;
            std::cout<<"Enter Breadth:"<<std::endl;
            std::cin>>breadth;
        }
        void add(Rectangle r1, Rectangle r2){
            length = r1.length + r2.length;
            breadth = r1.breadth + r2.breadth;
        }
        void perimeter(Rectangle r){
            peri = 2*(r.length + r.breadth);
            std::cout<<"Perimeter is"<<peri;
        }
        // void area(){
        //     area = length * breadth;
        // }
 
};
 
int main(){
    Rectangle r1,r2,r3;
    Rectangle();
    r1.input();
    r1.show();
    r2.input();
    r2.show();
    r3.add(r1,r2);
    std::cout<<"Result:";
    r3.show();
    // r3.perimeter(r1);
    // r3.perimeter(r2);
    // r3.area();
    // r3.area();
    
}