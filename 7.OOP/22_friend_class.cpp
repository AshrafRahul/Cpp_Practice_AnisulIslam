#include<iostream>
#include<cstring>
using namespace std;

class A{
    private:
        int id = 916;
        string name = "Ashraf";
    
    public:
        friend class B;
};

class B{
    public:
        void display(A ob){
            cout<<ob.id<<endl;
            cout<<ob.name<<endl;
        }
};

int main(){
    A ob1;
    B ob2;

    ob2.display(ob1);
    
    return 0;
}