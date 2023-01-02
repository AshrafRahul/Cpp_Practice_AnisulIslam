#include<iostream>
#include<cstring>
using namespace std;

class Person{
    public:
        void display(){
            cout<<"I am a person"<<endl;
        }
};

class Student : public Person{
    public:
        void display(){
            cout<<"I am a student"<<endl;
        }
};

class Teacher : public Student{
    public:
        void display(){
            cout<<"I am a teacher"<<endl;
        }
};

int main(){
    Person p;
    p.display();

    Student s;
    s.display();

    Teacher t;
    t.display();

    return 0;
}