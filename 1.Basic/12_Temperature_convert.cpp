#include<iostream>

using namespace std;
int main(){
    double cel,fah;
    cout<<"Enter Celsius temperature: ";
    cin>>cel;

    fah = (cel*((double)9/(double)5))+32;
    cout<<"Converted temperature in Fahrenheit: "<<fah<<endl;

    return 0;
}