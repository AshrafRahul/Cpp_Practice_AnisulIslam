#include<iostream>
#include<cstring>
using namespace std;

class Overload{
    public:
        void add(int x, int y){
            cout<<x+y<<endl;
        }
        void add(int x, int y, int z){
            cout<<x+y+z<<endl;
        }
        void add(){
            cout<<"Nothing to add"<<endl;
        }
};

int main(){
    Overload ov;
    ov.add(10,20);
    ov.add(10,20,30);
    ov.add();

    return 0;
}