//--------------------------------------------------------------------------------
// Apni Laptop class likh jisme pointer price ho.
// Copy Constructor me new int(*obj.price); use karna (Deep Copy Logic).
// Test karna: dell.price change karega, par hp.price unaffected rahega.
//--------------------------------------------------------------------------------

#include <iostream>

using namespace std;

class Laptop{
    public:
        int* price;

        Laptop(){
            price = new int(25000);
        }

        Laptop(int price_){
            price = new int (price_);
        }

        Laptop(const Laptop &obj){
            price = new int(*obj.price);
        }

        void show(){
            cout<<" Price : "<<*price<<endl;
        }

        ~Laptop(){
            delete price;
            cout<<"-------------------dectructor called!!"<<endl;
        }
};
int main(){
    
    Laptop hp(30000);    //price of  Hp
        cout<<"\nHp ";
        hp.show();

    Laptop dell(hp);  //copy constructor called
        cout<<"Dell ";
        dell.show();
        cout<<endl;
        
    //chanding the value of dell.
    cout<<"\nChanging the value of dell....."<<endl; 
    *dell.price = 12000;

    //the price of hp will be not get adjusted automatically as the dell.
    cout<<"\nprice of hp gets atomatically adjusted as the dell (pass by value.)....\n"<<endl; 
    dell.show();     
    hp.show();  
    cout<<endl;
}
