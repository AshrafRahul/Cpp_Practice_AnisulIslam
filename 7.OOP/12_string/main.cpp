#include <iostream>
#include<stdio.h>
using namespace std;

int main()
{
    char m0[6] = {'h','e','l','l','o'};
    cout<<m0<<endl;

    char m1[] = {'h','e','l','l','o', '\0'};
    cout<<m1<<endl;

    char m2[] = "hello";
    cout<<m2<<endl;

    char name[30];
    gets(name);
    cout<<"Welcome "<<name<<endl;

    return 0;
}
