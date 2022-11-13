#include<iostream>
using namespace std;

int addition(int a, int b){
    int sum = a+b;
    return sum;
}

int main(){
    int result = addition(10,20);
    cout << result << endl;

    return 0;
}