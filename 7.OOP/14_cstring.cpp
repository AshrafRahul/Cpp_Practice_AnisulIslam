#include<iostream>
#include<cstring>

using namespace std;
int main(){
    string str1 = "Ashraful";
    string str2 = " Islam";
    string str3;

    str3 = str1;
    cout<<"String 3: "<<str3<<endl;

    str3 = str1+str2;
    cout<<"String1 + String2 = "<<str3<<endl;

    int len = str1.size();
    cout<<"Length of string1: "<<len<<endl;

    return 0;
}