#include <iostream>
#include <vector>
using namespace std;



int main(){
    vector<int> vectorOfInts;
    vectorOfInts.push_back(1);
    vectorOfInts.push_back(2);
    vectorOfInts.push_back(3);
    vectorOfInts.push_back(4);
    vectorOfInts.push_back(5);

    cout << "\n";
    cout << "Printing the vector after adding 5 integer numbers " << endl;
    for(vector<int>::iterator it = vectorOfInts.begin(); it !=vectorOfInts.end(); it++){
        cout << *it << endl;
    }

    vectorOfInts.push_back();

    cout << "\n";
    cout << "Printing the vector after pop_back method " << endl;
    for(int i = 0; i < vectorOfInts.size(); i++){
        cout << vectorOfInts[i] << endl;
    }
    cout << "\n";

    return 0;
}