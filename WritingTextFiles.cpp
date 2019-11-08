#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream outFile;
    //fstream outFile;
    
    string outputFileName = "text.txt";
    outFile.open(outputFileName);
    //outFile.open(outputFileName, ios::out);

    if(outFile.is_open()){

        for(int i = 0; i <= 1000000; i++){
            outFile << "Hello there this is the line number: " << i << endl;
            //outFile << 123 << endl;
        }
        
        outFile.close();
    }
    else {
        cout << "Coudl not create file: " << outputFileName << endl;
    }
    return 0;
}