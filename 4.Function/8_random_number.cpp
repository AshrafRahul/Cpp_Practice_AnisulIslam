#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
    for(int i=1; i<=5; i++){
        int randomNumber = rand();
        int randomNum = rand()%5+1;
        cout<<"Random number: "<<randomNumber<<endl;
        cout<<"Random number: "<<randomNum<<endl<<endl;
    }

    return 0;
}