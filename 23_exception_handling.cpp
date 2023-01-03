#include<iostream>
#include<cstring>
using namespace std;



int main(){
    try{
        int n1, n2;

        cout<<"Enter number1: ";
        cin>>n1;

        cout<<"Enter number2: ";
        cin>>n2;

        if(n2==0){
            throw -1;
        }

        double result = (double)n1/n2;
        cout<<"Result: "<<result<<endl;
    }
    catch(...){ //for any type of data type, it will work
        cout<<"Divide by 0 is not possible"<<endl;
        cout<<"Please try again"<<endl;
    }

    return 0;
}