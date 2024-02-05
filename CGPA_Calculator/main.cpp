#include <iostream>
#include <fstream>
#include <cstdlib>
#include "calculator.h"
using namespace std;
void displayMainMenu(){
    cout << "CGPA Calculator\n";
    cout << "===============\n";
}

int main(){
    string name;
    calculator::Student student;
    displayMainMenu();
    cin >> name;
    student.setName(name);
    student.addGrades();

    return 0;
}