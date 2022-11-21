#include<iostream>
using namespace std;

int x=10;//global variable

int main(){
    int x=50; //local variable
    cout<<x<<endl; //it will print 50
    cout<<::x<<endl;//it will print 10
    //:: scope resolution operator

    return 0;
}