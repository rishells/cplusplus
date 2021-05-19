#include<iostream>

using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

struct Test
{
    int A[5];
    int n;
};

void changeLength(struct Rectangle *p, int l)
{
    p->length=l;
}

void fun(struct Test t1)
{
    t1.A[0]=10;
    t1.A[1]=23;
}

int main()
{
    struct Rectangle r = {10,5};
    changeLength(&r,20);

    struct Test t = {{2,4,6,8,10},5}
    fun(t);
    cout<<t;
    return 0;
}


