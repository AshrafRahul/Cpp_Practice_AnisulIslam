#include<iostream>
#include<iomanip>

using namespace std;
int main(){
    float n1,n2,sum,sub,mul,div;

    cout<<"Enter number1: ";
    cin>>n1;
    cout<<"Enter number2: ";
    cin>>n2;
    cout<<endl;

    cout<<showpoint; //to visible number after point
    cout<<setprecision(10); //how many numbers in a fractional value

    sum = n1+n2;
    sub = n1-n2;
    mul = n1*n2;
    div = n1/n2;
    
    cout<<setw(30)<<"Total sum is: "<<sum<<endl;
    cout<<setw(30)<<"Substraction value is: "<<sub<<endl;
    cout<<setw(30)<<"Multipication value is: "<<mul<<endl;
    cout<<setw(30)<<"Division value is: "<<div<<endl;
    //setw() use for formating output

    return 0;
}