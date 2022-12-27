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

        void setValue(int x, double y){
            id = x;
            gpa = y;
        }
};

int main(){
    Student Ashraf, Rahul;
    
    Ashraf.setValue(916, 3.88);
    Ashraf.display();

    Rahul.setValue(619, 3.79);
    Rahul.display();

    getch();
}