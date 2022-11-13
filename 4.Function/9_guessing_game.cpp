#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
    while(1){
        int guessNum, randomNum;

        cout<<"Enter your guess between 1 to 5: ";
        cin>>guessNum;

        randomNum = 1 + rand()%5;

        if(guessNum == randomNum){
            cout<<"You have won"<<endl;
        }
        else{
            cout<<"You have lose"<<endl;
            cout<<"Random number was: "<<randomNum<<endl;
        }
    }

    return 0;
}