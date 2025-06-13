//-----------------------------------------------------------------------------
// ek Laptop class bana jisme brand aur price ho.

// Ek default constructor, jo "Brand: Generic, Price: 0" set kare.
// Ek parameterized constructor, jo values set kare.
// Ek constructor jo sirf brand accept kare aur price ko 50000 set kare.
//-----------------------------------------------------------------------------

#include <iostream>
#include <string>

using namespace std;

class Laptop{
    public:
        string brand;
        int price;

        Laptop(){
            brand = "Generic";
            price = 0;
        }  
        Laptop(string b, int p){
            brand = b;
            price = p;
        }   
        Laptop(string brand_){
            brand = brand_;
            price = 50000;
        }

        void show(){
            cout<<"\n"<<"Brand : "<<brand<<endl;
            cout<<"Price : "<<price<<"\n"<<endl;
        }

        ~Laptop(){}
};

int main(){

    //checking the default constructor.
    cout<<"\nchecking the default constructor."<<endl;
    Laptop unknown;
        unknown.show();
    //checking the parameterized constructor.
    cout<<"\nchecking the parameterized constructor."<<endl;
    Laptop Hp("Hp",120000);
        Hp.show();
    //only setting the brand name.
    cout<<"\nonly setting the brand name."<<endl;
    Laptop dell("Dell");
        dell.show(); 
return 0;
}