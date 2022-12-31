#include <iostream>
#include "selectionoperator.h"

using namespace std;

int main()
{
    SelectionOperator ob;
    SelectionOperator *p = &ob;
    p -> Display();
    return 0;
}
