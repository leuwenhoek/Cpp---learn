// Ek Vehicle class banao jisme:
// Default constructor ho jo "Generic Vehicle" aur 0 speed set kare.
// Ek constructor sirf speed ko set kare.
// Ek constructor name aur speed dono set kare.
// Saare constructors delegating constructors ka use karke implement karo.

#include <iostream>
using namespace std;

class Vehicle{
    public: 
        string type;
        int speed;

        Vehicle() : Vehicle("Generic vehicle", 0){}
        Vehicle(int sp) : Vehicle("Generic vehicle", sp){}
        Vehicle(string vehicle_name, int sp) : type(vehicle_name), speed(sp){}

        void show(){
            cout<<"Type : "<<type<<endl;
            cout<<"speed : "<<speed<<endl;
            cout<<endl;
        }
};
int main(){
    Vehicle v1;
        v1.show();
    
    Vehicle v2("super vehicle", 100);
        v2.show();

    Vehicle v3(89);
        v3.show();
}