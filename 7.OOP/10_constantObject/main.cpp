#include <iostream>
#include "constantobject.h"

using namespace std;

int main()
{
    const constantObject ob;
    ob.display1();

    constantObject ob1;
    ob1.display2();


    return 0;
}
