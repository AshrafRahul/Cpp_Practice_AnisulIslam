#include "destructor.h"
#include<iostream>
using namespace std;

destructor::destructor()
{
    cout<<"Instructor is called"<<endl;
}

destructor :: ~destructor()
{
    cout<<"Destructor is called"<<endl;
}

void destructor :: display()
{
    cout<<"Display is called"<<endl;
}
