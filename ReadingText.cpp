#include <iostream>
#include <fstream>
using namespace std;

int main(){

    string inFileName = "test.txt";
    fstream inFile;

    inFile.open(inFileName);

    if(inFile.is_open()){

        string line;
        //while(!inFile.eof()){
        while (inFile){
                getline(inFile, line);
        //inFile >> line;
        cout << line << endl;
        }
    }
    else {
        cout << "Cannot open file: " << inFileName << endl;
    }
    return 0;
}