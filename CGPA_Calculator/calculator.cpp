#include <iostream>
#include <vector>
#include <cstdlib>
/* CGPA Calculator
    - Able to input informations(number of courses taken, grades earn in each)
    - Calculate CGPA from given results
    - Show individual grades of each course
    - Calculate total Credits, total Grade Points 
    - Might split into 2, one that take files, one that take 
    This one doesn't seems like we need a class
*/

namespace{

}
namespace calculator{
    using namespace std;


    
    class Student{
        private:
            string name;
            int age;
            double cgpa;
            vector<string> courses;
            vector<double> grades;
            bool checkValidScore(double score) {
                if(score>=0&&score<=100) {
                    return true;
                }
                return false;
            }
            double convertScoreToGrade(double score){
                //Since it slowly go down, we can do it like
                if(score>=90){
                    return 4.3;
                } else if (score>=85) {
                    return 4.0;
                } else if (score>=80) {
                    return 3.7;
                } else if (score>=77) {
                    return 3.3;
                } else if (score>=73) {
                    return 3.0;
                } else if (score>=70) {
                    return 2.7;
                } else if (score>=67) {
                    return 2.3;
                } else if (score>=63) {
                    return 2.0;
                } else if (score>=60) {
                    return 1.7;
                } else if (score>=57) {
                    return 1.3;
                } else if (score>=53) {
                    return 1.0;
                } else if (score>=50) {
                    return 0.7;
                } else {
                    return 0.0;
                }

            }
        public:
            Student(){
                courses = {};
                grades = {};
            }
            void setName(string name){
                this->name = name;
            }
            void setAge(int age){
                this->age = age;
            }
            string getName(){
                return this->name;
            }
            int getAge(){
                return this->age;
            }
            double getGPA(){
                return this->cgpa;
            }
            void addGrades(){
                system("cls");
                cout << "Enter all your scores one by one (Enter -1 when done):";
                double score;
                while (score!=-1) { 
                    cin >> score;
                    if (checkValidScore(score)){
                        
                    };
                }
            }

            

            void calculateGPA(){
                this->cgpa = 0;
                for(double grades : this->grades){
                    this->cgpa += grades;
                }
                this->cgpa/=size(this->grades);
                cout << "New GPA is " << this->cgpa;
            }

    };
};