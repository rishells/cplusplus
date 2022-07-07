#include <iostream>

using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

struct Cube
{
    int x_dimension;
    int y_dimension;
    int z_dimension;

};

int main()
{
    // Stack memory
    Rectangle r = {3,4};
    cout<< r.breadth <<endl;
    cout<< r.length << endl;

    // Heap memory
    Rectangle *p = &r;
    cout<< p->length<<endl; // or (*p).length
    cout<<p->breadth<<endl;

    struct Rectangle *p2;
    p2 = new Rectangle; // c++ syntax
    p2->breadth = 15;
    p2->length = 7;

    cout<<p2->length<<endl;
    cout<<p2->breadth<<endl;
    
    /* (.) dot notation access members of data and (->) access members of pointers data*/

    // Stack memory
    Cube c = {3,3,3};
    cout<<"Cube x_dimension: " <<c.x_dimension << endl;


    // Heap memory
    Cube *pcube;
    pcube = new Cube;
    pcube->x_dimension = 9;
    cout<<pcube->x_dimension<< endl;


    
    return 0;
}