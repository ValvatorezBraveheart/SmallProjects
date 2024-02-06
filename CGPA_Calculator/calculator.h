#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <cstdlib>
#include <fstream>
namespace calculator{
    using namespace std;
    vector<string> tokenizer(string str, char del);
    class Student{
        private:
            string name;
            int age;
            double cgpa;
            vector<string> courses;
            vector<double> grades;
            double convertScoreToGrade(double score);
            
        public: 
            bool checkValidScore(double score);
            Student();
            void setName(string name);
            void setAge(int age);
            string getName();
            int getAge();
            double getGPA();
            void addGrades();
            void calculateGPA();
            void askForName();
            void addGradesManually();
            void addDataFromFile();
    };
}
#endif