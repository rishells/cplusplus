#include <iostream>

using namespace std;

// void swap(int &x, int &y) // Call by reference
// {
//     int temp;
//     temp =x;
//     x=y;
//     y=temp;

// }

void swap(int *x, int *y) // Call by address -- parameters of type pointers
// Call by address is used to modify the actual main funcion parameters and modify them..
{
    int temp;
    temp =*x; // Dereferencing operator * (*x will access num1)
    *x=*y;
    *y=temp;

}
int main()
{
    int num1=10,num2=15;
    cout<<"First Number: " << num1 <<endl;
    cout<<"Second Number: " << num2 <<endl;
    cout<< "Running SWAP function..." <<endl;
    swap(&num1,&num2); // Address of actual parameters

    cout<<"First Number: " << num1 <<endl;
    cout<<"Second Number: " << num2 <<endl;

    return 0;
}