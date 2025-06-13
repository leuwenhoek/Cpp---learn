#include <iostream>

using namespace std;

class Base{
    public:
    virtual void fun1() = 0;
};
class derive : public Base{
    public:
        void fun1() override final{                 //now, we can't use this fun1 anymore in other class using inheritence with "derived" class.
            cout<<"Deriver class 1...."<<endl;
        }
};

int main(){
    derive obj;
    obj.fun1();
}