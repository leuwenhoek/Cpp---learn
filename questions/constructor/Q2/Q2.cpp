//make a object to check that that the constructor is getting called or not.

#include <iostream>

using namespace std;

class Myclass{
    public:
        Myclass(){
            cout<<"\nconstructor called!!"<<endl;
        }
        ~Myclass(){
            cout<<"\nDestructor called!!"<<endl;
        }
};
int main(){
    Myclass A;
}