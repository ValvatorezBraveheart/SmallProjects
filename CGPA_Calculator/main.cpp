#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;
void displayMainMenu(){
    cout << "CGPA Calculator\n";
    cout << "===============\n";
    cout << "Enter your name: ";
}



int main(){
    string name;

    displayMainMenu();
    cin >> name;

    return 0;
}