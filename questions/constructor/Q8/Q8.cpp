//--------------------------------------------------------------------------------------------
// Ek Laptop class bana, jo ek pointer price ko store kare.
// Ek constructor likh jo new int(price_) se memory allocate kare.
// Shallow Copy ko test kar – ek object change kar aur dekh dusre pe kya effect hota hai!
//--------------------------------------------------------------------------------------------

#include <iostream>

using namespace std;

class Laptop{
    public:
        int *price;

        Laptop(){
            price = new int(25000);
        }

        Laptop(int price_){
            price = new int(price_);
        }

        Laptop(const Laptop &obj){
            cout<<"\ncopy constructor called!!"<<endl;
            price = obj.price;
        }

        void show(){
            cout<<"Price : Rs. "<<*price<<"/-"<<endl;
        }

        ~Laptop(){
            cout<<"\n----------destructor called!!------------";
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
        
    //changing the value of dell.
    cout<<"\nChanging the value of dell....."<<endl; 
    *dell.price = 12000;

    //the price of hp will be automatically adjust as the dell.
    cout<<"\nprice of hp gets atomatically adjusted as the dell (pass by reference.)....\n"<<endl; 
    dell.show();     
    hp.show();  
    cout<<endl;
}