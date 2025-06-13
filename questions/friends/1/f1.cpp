// Ek Laptop class banao jisme batteryPercentage private ho aur ek friend function likho jo usko print kare.
//Ek Student class banao jisme marks private ho aur ek friend function likho jo marks print kare.

#include <iostream>

using namespace std;

class Laptop{
    private:
        int batteryPercentage;
    public:
        Laptop(int battery){
            batteryPercentage = battery;
        }

        friend int showbattery(Laptop b){
            cout<<"Battery percentage : "<<b.batteryPercentage<<"%"<<endl;
            
            return 0;
        }
};
int main(){
    Laptop lap1(69);
        showbattery(lap1);
}