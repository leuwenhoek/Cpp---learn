//-------------------------------------------------------------------------------------
// Laptop class me ek brand variable add kar.
//  Copy Constructor me brand = obj.brand; likh, taaki brand bhi copy ho.
//  Ek function bana jo brand aur price dono print kare.
//  Test kar ki dell ka brand aur price change karega, but hp unaffected rahega.
//-------------------------------------------------------------------------------------

#include <iostream>
#include <string>
using namespace std;

class Laptop{
    public:
        string *brand;
        int price;

        Laptop(int p, string b){
            price = p;
            brand = new string(b);
        }
        Laptop(const Laptop &obj){
            brand = new string (*obj.brand);
            price = obj.price;
        }

        void show(){
            cout<<"brand : "<<*brand<<endl;
            cout<<"Price : "<<price<<endl;
        }

        ~Laptop(){
            delete brand;
        }
};  

int main(){
    
    // original values
    cout<<"original values"<<endl;
    Laptop lap1(30000,"Hp");    //price of Hp
        cout<<"\nHp ";
        lap1.show();

    Laptop lap2(25000,"Dell");    //price of Dell
        cout<<"\nDell ";
        lap2.show();

    //Changing the value of lap2
    cout<<"\nChanging the value of lap2"<<endl;
    lap2.price = 20000;
    *lap2.brand = "unknown";
    lap2.show();

    cout<<"\nvalues of lap1 is still unaffected"<<endl;
    lap1.show();

}