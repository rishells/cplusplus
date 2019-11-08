#include <iostream>
#include <fstream>

using namespace std;

#pragma pack(push, 1)

struct Person{  // same as class but in struct all members are public by default
    char name[50];
    int age;
    double height;
};

#pragma pack(pop)

int main(){


    Person someone = {"Isaac", 1, 0.8};
    string fileName = "test.txt";

//// Write binary file ///

    ofstream outputFile;
    outputFile.open(fileName, ios::binary);

    if(outputFile.is_open()){

        //outputFile.write((char *)&someone, sizeof(Person));
        outputFile.write(reinterpret_cast<char *>(&someone), sizeof(Person));


        outputFile.close();    
    }

    else {
        cout << "Could not create file " + fileName;
    }

    

//// Read binary file ///

Person someoneElse = {};

    ifstream inputFile;
    inputFile.open(fileName, ios::binary);

    if(inputFile.is_open()){

        //outputFile.write((char *)&someone, sizeof(Person));
        inputFile.read(reinterpret_cast<char *>(&someoneElse), sizeof(Person));


        inputFile.close();    
    }

    else {
        cout << "Could not read file " + fileName;
    }

    cout << someoneElse.name << ", " << someoneElse.age << ", " << someoneElse.height << endl;

   

    return 0;
}