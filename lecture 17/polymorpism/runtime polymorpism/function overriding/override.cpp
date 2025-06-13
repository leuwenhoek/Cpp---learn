#include <iostream>

using namespace std;

class Parent{
    public:
        void fun(){
            cout<<"Parent function is been called"<<endl;
        }
};

class Child : public Parent{
    public:
        void fun(){
            cout<<"child overridden function is been called"<<endl;
        }
};

int main(){
    Child c1;
    c1.fun();
}