#include<iostream>
#include<cstring>

using namespace std;
int main(){
    char name1[] = "Ashraful";
    char name2[10];
    char name3[] = " Islam";
    char name4[] = "Ashraful";
    char name5[] = "Ashraful";

    int len = strlen(name1); //string length
    cout<<"Length of sring: "<<len<<endl;

    strcpy(name2, name1); //string copy
    cout<<"Name 2: "<<name2<<endl;

    strcat(name1, name3); //name1 + name3
    cout<<"Name 1: "<<name1<<endl;

    strupr(name1); //uppercase
    cout<<"Upper case: "<<name1<<endl;
    
    strlwr(name1); //lowercase
    cout<<"Lower case: "<<name1<<endl;

    int value = strcmp(name4, name5);
    if(value == 0){
        cout<<"String is equal"<<endl;
    }
    else{
        cout<<"String is not equal"<<endl;
    }

    return 0;
}