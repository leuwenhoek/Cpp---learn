//--------------------------------------------------------------------------------------------------------------------
// Ek Base1 aur Base2 class bana jisme dono me constructor "Base1 Created!" aur "Base2 Created!" print kare.
// Ek Derived class bana jo Base1, Base2 dono ko inherit kare.
// Ek Derived object bana aur dekho pehle kaunsa constructor call hota hai.
//--------------------------------------------------------------------------------------------------------------------

#include <iostream>

using namespace std;

class Base1{
    public:
    Base1(){
        cout<<"Base1 created!"<<endl;
    }
    ~Base1(){}
};
class Base2{
    public:
    Base2(){
        cout<<"Base2 created!"<<endl;
    }
    ~Base2(){}
};

class derived : public Base1, public Base2{};

int main(){
    cout<<"the first constructor called is : ";
    derived obj;
}