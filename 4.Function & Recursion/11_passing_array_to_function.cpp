#include<iostream>
using namespace std;

void displayArray(int a[], int arraySize){
    for(int i=0; i<arraySize; i++) cout<<a[i]<<" ";
}

int main(){
    int a[5] = {10,20,30,40,50};
    displayArray(a,5);
    return 0;
}