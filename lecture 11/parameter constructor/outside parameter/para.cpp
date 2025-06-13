#include <iostream>

using namespace std;

class A{
    private:
        int i;
        float j;
    public:
        A(int a = 0,float b = 1000.0);
};
A::A(int a, float b){      //defining the parameters ooutside the 
    i = a;
    j = b;
}
int main(){
    A a1 (23, 2005.4);
    A a2;
}