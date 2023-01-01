#include "constantobject.h"
#include<iostream>
using namespace std;

void constantObject :: display1() const
{
    cout<<"I am constant function"<<endl;
}

void constantObject :: display2()
{
    cout<<"I am non-constant function"<<endl;
}
