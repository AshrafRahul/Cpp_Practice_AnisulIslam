#include<iostream>
#include<stdio.h> //as we have use gets
using namespace std;
int main(){
    char name[20],n[20];
    cout<<"Enter your name: ";
    cin>>name;
    cout<<"Enter your full name: ";
    fflush(stdin);
    gets(n);

    cout<<"Welcome "<<name<<endl;
    cout<<"Your full name is : "<<n<<endl;

    return 0;
}