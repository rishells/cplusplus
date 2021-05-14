#include <iostream>

using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

int main()
{
    // Stack memory
    Rectangle r = {3,4};
    cout<< r.breadth <<endl;
    cout<< r.length << endl;

    // Heap memory
    Rectangle *p = &r;
    cout<< p->length<<endl;
    cout<<p->breadth<<endl;

    struct Rectangle *p2;
    p2 = new Rectangle;
    p2->breadth = 15;
    p2->length = 7;

    cout<<p2->length<<endl;
    cout<<p2->breadth<<endl;
    
    /* (.) dot notation access members of data and (->) access members of pointers data*/

    return 0;
}