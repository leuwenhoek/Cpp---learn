//----------------------------------------------------------------
// Ek Animal class bana jisme "Animal Created!" print ho.

// Dog class bana jo Animal ko inherit kare.
// Dog ka constructor "Dog Created!" print kare.
// Ek Dog object bana aur dekho output kya aata hai.
//----------------------------------------------------------------

#include <iostream>
#include <string>

using namespace std;

class Animal{
    public:
        Animal(){
            cout<<"Animal created"<<endl;
        }
        ~Animal(){}
        
    };
class Dog : public Animal{
    public:
        Dog(){
            cout<<"Dog created"<<endl;
        }
        ~Dog(){}
};
int main(){
    Dog pug;
return 0;
}