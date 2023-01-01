#include<iostream>
using namespace std;

class Student{
    public:
        const int admissionFee;
        const int examFee;
        int id;

        Student(int x, int y, int z):admissionFee(x), examFee(y){
            cout<< "Total admission fees: " << admissionFee << endl;
            cout<< "Total exam fess: " << examFee <<endl;
            id=z;
            cout<< "Student id is: " << id <<endl;
        }
};

int main(){
    Student a1(15000, 2000, 916);

    return 0;
}