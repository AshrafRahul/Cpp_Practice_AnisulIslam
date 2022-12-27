#include<iostream>
#include<conio.h>
using namespace std;

class Student{
    public:
        int id;
        double gpa;
};

int main(){
    Student Ashraf, Rahul;
    
    Ashraf.id = 916;
    Ashraf.gpa = 3.88;
    cout<<Ashraf.id<<" "<<Ashraf.gpa<<endl;

    Rahul.id = 619;
    Rahul.gpa = 3.79;
    cout<<Rahul.id<<" "<<Rahul.gpa;

    getch();
}