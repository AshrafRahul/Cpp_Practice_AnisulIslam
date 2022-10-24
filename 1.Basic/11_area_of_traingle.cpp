#include<iostream>

using namespace std;
int main(){
    double base, height, area;
    cout<<"Enter base of triangle: ";
    cin>>base;
    cout<<"Enter height of triangle: ";
    cin>>height;

    area = ((double)1/(double)2)*base*height;
    cout<<endl<<"Area of the tringle is: "<<area<<endl;
}