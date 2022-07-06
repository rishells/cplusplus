// References are aliases, useful for parameter passing in c++

#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    int &r = a; // reference to a, needs to be initialized
    a=25;
    int b = 30;
    r=b;
    cout << a << endl;
    cout<< r << endl;
    return 0;
}