#include<iostream>
#include<conio.h>
using namespace std;

class Student{
    public:
        int id;
        double gpa;

        void display(){
            cout<<id<<" "<<gpa<<endl;
        }

        Student(int x, double y){ //it's a parametric constructor
            id = x;
            gpa = y;
        }
};

int main(){
    Student Ashraf(916, 3.88);//it's a parametric constructor
    Ashraf.display();

    Student Rahul(619, 3.79);//it's a parametric constructor
    Rahul.display();

    getch();
}