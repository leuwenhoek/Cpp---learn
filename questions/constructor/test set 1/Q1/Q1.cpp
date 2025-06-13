//----------------------------------------------------------
// Ek Car class bana jisme brand ka ek attribute ho.

// Default constructor "Brand: Unknown" set kare.
// Ek object bana ke print kar.
//----------------------------------------------------------

#include <iostream>
#include <string>
using namespace std;

class Car{
    public:
        string brand;
        Car(){
            brand = "Unknown";
        }

        void print(){
            cout<<"Brand : "<<brand<<endl;
        }

        ~Car(){}
};
int main(){
    Car b1;
    b1.print();
return 0;
}