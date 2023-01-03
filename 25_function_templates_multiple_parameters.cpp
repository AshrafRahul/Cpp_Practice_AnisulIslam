#include<iostream>
#include<cstring>
using namespace std;

template <class myTemplate1, class myTemplate2>
myTemplate1 add(myTemplate1 a, myTemplate2 b){
    return a+b;
}

int main(){
    cout<<add(10,20)<<endl;
    cout<<add(10,20.54)<<endl;

    return 0;
}
