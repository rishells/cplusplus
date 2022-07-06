#include <iostream>
#include <cmath>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
    char x;
};

struct Circle{
    double radius;
};

int main(){
    struct Rectangle r1={5,8,'s'};
    // r1.length = 5;
    // r1.breadth = 8;
    cout<<"Area of the rectangle: "<< r1.length * r1.breadth <<endl;
    cout<<"Size of struct Rectangle " <<sizeof(r1)<<endl;

    struct Circle c1={7.5};
    cout<<"Area of the circle: "<<M_PI * pow(c1.radius,2)<<endl;

}