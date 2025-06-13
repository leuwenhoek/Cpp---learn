#include <iostream>
#include <string>

using namespace std;

int main(){

    int option, petrol, Xp;
    double Amount, liter;
    string name;

    petrol = 100;
    Xp = 130;

    cout<<"Enter your name : ";
    getline (cin,name);

    cout<<"Hi "<<name<<" which fuel do you want?? (Xp(1) or petrol(2)) : ";
    cin>>option;

    if(option == 2){

        cout<<"how much petrol do you want (in l)?? : ";
        cin>>liter;

        Amount = liter * petrol;

        cout<<"for Xp you need to pay : "<<Amount<<endl;
    }

        else if (option == 1){

        cout<<"how much Xp do you want (in l)?? : ";
        cin>>liter;

        Amount = liter * Xp;

        cout<<"for Xp you need to pay : "<<Amount<<endl;
    }

    else{
        cout<<"please choose a valid option..";
    }



}
