// -----------------------------------------------------------------
// make a class of laptop containing its brand and price.
// writa a parameterized constructor which sets the value.
// make 3 object and pass and print then seperatly.
// -----------------------------------------------------------------

#include <iostream>

using namespace std;

class Laptop{
    public:
        string brand;
        double price;

        Laptop(){
            brand = "unknown";
            price = 0;
        }

        Laptop(string brand_, double price_){
            brand = "unknown";
            price = 0;
            brand = brand_;
            price = price_;
        }

        void show(){
            cout<<"brand : "<<brand<<endl;
            cout<<"price : "<<price<<endl;
        }

        ~Laptop(){}
};
int main(){
    Laptop hp("HP",50000.31);
        hp.show();

    Laptop dell("Dell",69001.12);
        dell.show();

    Laptop asus("Asus",120000);
        asus.show();
}