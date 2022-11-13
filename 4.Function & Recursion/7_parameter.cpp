#include<iostream>
using namespace std;

void square(int n){
    int result = n*n;
    cout<<"Square of "<<n<<" is: "<<result<<endl;
}

int main(){
    square(2);
    square(3);
    square(4);

    return 0;
}