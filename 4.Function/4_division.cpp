#include<iostream>
using namespace std;

void division(float a, float b){
    float sum = a/b;
    cout<<"Div: "<<sum<<endl;
}

int main(){
    division(125,20);
    division(200,20);

    return 0;
}