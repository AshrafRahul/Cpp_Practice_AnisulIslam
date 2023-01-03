#include<iostream>
#include<cstring>
using namespace std;

template <class myTemplate>
myTemplate add(myTemplate a, myTemplate b){
    return a+b;
}

int main(){
    cout<<add(10,20)<<endl;
    cout<<add(10.1,20.54)<<endl;

    return 0;
}
