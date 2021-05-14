#include<iostream>

using namespace std;

int main()
{
    int n = 0;
    // cout<<"Enter Size:"<<endl;
    // cin>>n;
    int A[] = {1,2,3,4,5,6,7,8,9};
    cout << "size of Array is: " << sizeof(A) /sizeof(int)<<endl;
    cout<< A[0] <<endl;
    cout<< A[1] <<endl;
    cout<< A[2] <<endl;
    cout<< A[3] <<endl;
    printf("%i\n", A[4]);
    printf("%i", A[5]);

    // for(int i=0;i<n;i++){
    //     cout<<A[n]<<endl;
    // }
    
    for (int x :A)
    {
        cout<<x<<endl;
    }

    cout << "Adding this print to test the remote repository changes";
    return 0;
}