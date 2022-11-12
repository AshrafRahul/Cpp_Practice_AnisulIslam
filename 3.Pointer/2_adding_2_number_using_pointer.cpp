#include<iostream>

using namespace std;
int main(){
    int n1=10, n2=20;
    int *p1, *p2;
    p1=&n1;
    p2=&n2;

    int sum=*p1+*p2;
    cout<<sum<<endl;

    return 0;
}