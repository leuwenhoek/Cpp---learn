//-------------------------------------------------------------------------------------------------------------------------------------
// Ek Laptop class bana jisme brand aur price ho.
// Ek parameterized constructor likh jo brand aur price set kare.
// Ek copy constructor likh jo ek object se values copy kare.
// main() me ek original object bana, aur dusra usko copy karke bana.
//-------------------------------------------------------------------------------------------------------------------------------------

#include <iostream>
#include <string>
using namespace std;

class Laptop{
    public:
        string brand;
        float price;

        Laptop(string brand_, float price_){
            brand = brand_;
            price = price_;
        }

        Laptop(const Laptop &obj){
            cout<<"\ncopied!!"<<endl;
            brand = obj.brand;
            price = obj.price;
        }

        void details(){
            cout<<"Brand : "<<brand<<endl;
            cout<<"Price : "<<price<<endl;
        }

        ~Laptop(){}
};

int main(){
    Laptop lap1("Hp",30000);
        lap1.details();
    Laptop lap2(lap1);
        lap2.details();
}