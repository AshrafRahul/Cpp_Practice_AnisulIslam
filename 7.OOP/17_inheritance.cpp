#include<iostream>
#include<cstring>
using namespace std;

class Person{
    public:
        string name;
        int age;

        void display1(){
            cout<<"Name: "<<name<<endl;
            cout<<"Age: "<<age<<endl;
        }
};

class Student : public Person{
    public:
        int id;
        
        void display2(){
            cout<<"ID: "<<id<<endl;
            // cout<<"Name: "<<name<<endl;
            // cout<<"Age: "<<age<<endl;
            display1();
        }
};

int main(){
    Student s1;
    s1.id = 916;
    s1.name = "Ashraful";
    s1.age = 22;
    s1.display2();

    return 0;
}