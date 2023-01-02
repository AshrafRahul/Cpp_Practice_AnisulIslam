#include<iostream>
#include<cstring>

using namespace std;

class Student{
    public:
        string name;

        Student(string name){
            this -> name = name; //when two variables are same
        }
        void display(){
            cout<<name<<endl;
        }
};
int main(){
    Student s1("Ashraful");
    s1.display();

    return 0;
}