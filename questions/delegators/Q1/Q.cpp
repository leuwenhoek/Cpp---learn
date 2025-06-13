// Ek class Car banao:
// Default constructor: "Unknown" model aur 0 price set kare.
// Ek constructor model ko set kare.
// Ek constructor model aur price dono set kare.
// Saare constructors ko delegating constructors ka use karke implement karo.

#include <iostream>
using namespace std;

class Car{
    public:
        string model;
        int price;

        Car(string model_, int price_) : model(model_), price(price_){
            cout<<"Parameterized constructor called!!"<<endl;
            cout<<endl;
        }
        
        Car(): Car("Unknown", 0) {
            cout<<"Default constructor called!!"<<endl;
        };
        Car(int pr): Car("Unknown", pr) {
            cout<<"Parameterized constructor called!!\n"<<endl;
        };

        void show(){
            cout<<"Model : "<<model<<endl;
            cout<<"Price : "<<price<<endl;
            cout<<endl;
        }
};
int main(){
    Car c1;
        c1.show();

    Car c2("Alto 800", 500000);
        c2.show();
    
    Car c3(2000000);
        c3.show();
}
    