#include<iostream>
using namespace std;

void sum(int a, int b){
    int add = a+b;
    cout<<"Sum is: "<<add<<endl;
}
void sum(int a, int b, int c){
    int add = a+b+c;
    cout<<"Sum is: "<<add<<endl;
}

int main(){
    sum(10,20);
    sum(10,20,30);

    return 0;
}