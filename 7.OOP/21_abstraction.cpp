#include<iostream>
#include<cstring>
using namespace std;

class MobileUser{
    public:
        virtual void sendMessage() = 0;
};

class Ashraf : public MobileUser{
    public:
        void sendMessage(){
            cout<<"This is Ashraf"<<endl;
        }
};

class Rahul : public MobileUser{
    public:
        void sendMessage(){
            cout<<"This is Rahul"<<endl;
        }
};

int main(){
    MobileUser *m;
    Ashraf a;
    Rahul r;

    m = &a;
    m -> sendMessage();

    m = &r;
    m -> sendMessage();
}
