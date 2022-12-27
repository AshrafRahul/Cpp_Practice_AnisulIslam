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
};

int main(){
    Student Ashraf, Rahul;
    
    Ashraf.id = 916;
    Ashraf.gpa = 3.88;
    Ashraf.display();

    Rahul.id = 619;
    Rahul.gpa = 3.79;
    Rahul.display();

    getch();
}