#include<iostream>
#include<iomanip>

using namespace std;
int main(){
    float n1,n2,sum,sub,mul,div;

    cout<<"Enter number1: ";
    cin>>n1;
    cout<<"Enter number2: ";
    cin>>n2;

    cout<<showpoint; //to visible number after point
    cout<<setprecision(10); //how many numbers in a fractional value

    sum = n1+n2;
    sub = n1-n2;
    mul = n1*n2;
    div = n1/n2;
    
    cout<<endl<<"Total sum is: "<<sum<<endl;
    cout<<"Substraction value is: "<<sub<<endl;
    cout<<"Multipication value is: "<<mul<<endl;
    cout<<"Division value is: "<<div<<endl;

    return 0;
}