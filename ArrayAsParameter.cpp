#include <iostream>

using namespace std;

void fun(int *A, int n)
{
    //cout<<sizeof(A)/sizeof(int)<<endl;
    A[0]=15;
    A[2]=666;
    n=6;
}

int * fun2(int size){
    int *p;
    p = new int[size];

    for(int i=0;i<size;i++)
    p[i]=i+1;

    return p;

}
int main()
{
    
    
    int A[]={2,4,6,8,10};
    int n=5;
    //cout<<sizeof(A[0])<<endl; Get the size of an array element
    // for(int i = 0; i<(sizeof(A)/(sizeof(A[0]))); i++){
    //     cout<<A[i]<<endl;
    // }
    cout<<"n before fun(): "<<n<<endl;
    fun(A,n);
    for(int x:A)
    cout<<x<<endl;
    cout<<"n after fun(): "<<n<<endl;

    //int *ptr;

    cout<<"FUNC2 execution"<<endl;

    int *ptr,sz=5;

    ptr=fun2(sz);

    for(int i=0;i<sz;i++)
    cout<<ptr[i]<<endl;

    return 0;
}