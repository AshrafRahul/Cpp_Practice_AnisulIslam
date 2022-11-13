#include<iostream>
using namespace std;

void substraction(int a, int b){
    int sum = a-b;
    cout<<"Sub: "<<sum<<endl;
}

int main(){
    substraction(10,20);
    substraction(20,20);

    return 0;
}