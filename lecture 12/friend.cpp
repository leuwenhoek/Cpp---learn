//Ek Car class banao jisme speed private ho, aur ek friend function showSpeed(Car c) likho jo speed print kare.
#include <iostream>

using namespace std;

class Car{
    private:
        float speed;
    public:
        Car(float s){
            speed = s;
        }
        friend void showspeed(Car c){
            cout<<"Speed : "<<c.speed<<" km/h"<<endl;
        };
};
int main(){
    Car lamborgini(278);
        showspeed(lamborgini);
}