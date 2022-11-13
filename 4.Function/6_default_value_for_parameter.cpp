#include<iostream>
using namespace std;

void display(int a=10, int b=20){
    cout<<a<<" "<<b<<endl;
}

int main(){
    display();
    display(25,30);

    return 0;
}