// Ponter is an address variable <storing address of data>
// 3 memories: Heap, Stack and code memories
// programm will not access directly the heap
// Pointers are used for accesing the heap memory / other resources / parameter passing

#include <iostream>

using namespace std;
struct Rectangle
{
    int length;
    int breadth;
};

int main()
{
    int a = 10; // 4 bytes

    int *p; // declaration of a pointer
    p = &a;  // p stores the address of a 

    cout<<a<<endl;
    cout<<"Using pointer "<<*p<<endl; // dereferencing

    cout << "ARRAY"<< endl;
    int A[5] = {2,4,6,8,10};
    int *p2;
    p2 = A;

    for(int i=0;i<5;i++)
    //cout<<A[i]<<endl;
    cout<<p2[i]<<endl;
    
    cout<<"USING MALLOC"<<endl; // Cish, malloc -> memory allocation
    int *p3;
    p3=(int *)malloc(5*sizeof(int)); // allocated in heap memory
    p3[0]=10; p3[1]=15; p3[2]=14; p3[3]=21; p3[4]=31;
    for(int i=0;i<5;i++)
    cout<<p3[i]<<endl;

    cout<<"USING NEW"<<endl; // C++ish
    int *p4;
    p4=new int[5]; // dinamically allocating memory
    p4[0]=10; p4[1]=15; p4[2]=14; p4[3]=21; p4[4]=31;
    for(int i=0;i<5;i++)
    cout<<p4[i]<<endl;
    //deallocating memory
    //free(p4); C
    //delete[] p; // c++

    cout << "Size of pointers"<<endl;

    int *p5;
    char *p6;
    float *p7;
    double *p8;
    struct Rectangle *p9;

    cout << sizeof(p5)<<endl;
    cout << sizeof(p6)<<endl;
    cout << sizeof(p7)<<endl;
    cout << sizeof(p8)<<endl;
    cout << sizeof(p9)<<endl;

}