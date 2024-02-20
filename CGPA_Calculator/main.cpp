#include <iostream>
#include <stdlib.h> 
#include <fstream>
#include <cstdlib>
#include "calculator.h"
using namespace std;
namespace {
    void displayMainMenu(){
        cout << "CGPA Calculator\n";
        cout << "===============\n";
        cout << "choose an option\n";
        cout << "1. Directly enter grades\n";
        cout << "2. Calculate from a csv file\n";
        cout << "3. Exit\n";
        cout << "Enter your option: ";
    }
    void option1(){
        string input;
        calculator::Student student;
        cout << "Enter you name: ";
        student.askForName();
        student.addGradesManually();
        student.calculateGPA();
        cin;
    }
    void option2(){
        calculator::Student student;
        student.addDataFromFile();
        student.calculateGPA();
    }
}

int main(){
    string name;
    int option = 0;
    while(option!=3){
        displayMainMenu();
        cin >> option;
        switch (option){
            case 1:
                option1();
                break;
            case 2:
                cout << "This will be implemented later";
                option2();
                break;
            case 3:
                cout << "Exiting...";
                break;
        }
    }
    cin;
    return 0;
}