#include <iostream>

using namespace std;

struct Rectangle
{
    int length;
    int breadth;
    char x;
};

int main()
{
    // struct Rectangle r;
    // r.breadth = 3;
    // r.length = 5;
    
    struct Rectangle r1 = {10,5};
    cout<<r1.length<<endl;
    cout<<r1.breadth<<endl;
    //printf("%d", sizeof(r1));
    return 0;
}