#include<iostream>
using namespace std;

int main(){
    string food = "Pizza is good";
    cout<<food<<endl;
    string* ptr = &food;
    cout<< *ptr <<endl;

    int a = 3;
    int b = 6;
    int* x = &a;
    int* y = &b;
    cout<<"The sum of 2 numbers using pointers is: "<<*x +*y<<endl;


    // int a = 31;
    // cout<<"Memory location of int variable a: "<<&a<<endl;
    // cout<<"Value is: "<< *reinterpret_cast<const int*>(0x7ffc374700fc);

    return 0;
}