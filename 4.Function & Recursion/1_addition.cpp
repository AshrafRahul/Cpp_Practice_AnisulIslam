#include<iostream>
using namespace std;

void addition(int a, int b){
    int sum = a+b;
    cout<<"Sum: "<<sum<<endl;
}

int main(){
    addition(10,20);
    addition(20,20);

    return 0;
}