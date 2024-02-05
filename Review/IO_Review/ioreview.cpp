#include <iostream>
#include <fstream>

int main(){
    using namespace std;
    string filename = "filename.txt";
    //Writing to a file
    ofstream MyFile(filename);
    MyFile << "This is a sample sentence";
    MyFile.close();
    //Reading a file
    string line;
    ifstream MyReadFile(filename);
    while(getline(MyReadFile, line)){
        cout << line;
    }
    MyReadFile.close();
}