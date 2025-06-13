// basic discount system for resturants for calculating bill.

#include <iostream>
#include <string>

using namespace std;

int main(){
    string name;
    int age;

    cout<<"Enter your name : ";
    getline(cin,name);

    cout<<"Enter your Age : ";
    cin>>age;

    int quantity, price;

    cout<< "Enter the quantity of tea packes : ";
    cin>>quantity;

    cout<<"Enter the price of tea packs : ";
    cin>>price;

    int total = price * quantity;

    cout<<"\n HI "<<name<< endl;
    cout<<"your total bill is : "<<total <<endl;

    if (total >= 1000)
    {
        cout << "you are aplicable for the discount of 5%. \n"<<endl;

        int discount;
        discount = total * 5/100;
        cout<<"your discount amount is : \n"<< discount << endl;
        
        int new_bill;
        new_bill = total - discount;
        cout<<"now your total bill after discount is : " << new_bill <<endl;

    }
    else{
        cout<<"you are not applicable for the discount"<<endl;
    }
    
    cout<<"Thanks for visiting our restaurant "<< name <<", hope so liked our discount system. \n"<<endl;

    return 0;
}