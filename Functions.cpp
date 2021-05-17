#include <iostream>

using namespace std;

int add(int a, int b)
{
    return a+b;
}

int substraction(int a,int b){
    return a-b;   
}
int multiplication(int a, int b){
    return a*b;
}
float division(float a, float b){
    return a/b;
}
int main()
{
    int input1,input2,sum;
    cout<<"Provide 2 numbers to perform the basic calculations:"<<endl;
    cin>>input1>>input2;
    sum = add(input1,input2);
    cout<<"The result of the sum is: "<<sum<<endl;
    cout<<"The result of the substraction is: "<<substraction(input1,input2)<<endl;
    cout<<"The result of the multiplication is: "<<multiplication(input1,input2)<<endl;
    cout<<"The result of the division is: "<<division(input1,input2)<<endl;

    return 0;
}