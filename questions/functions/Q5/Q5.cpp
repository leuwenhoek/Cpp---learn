//WAP to take input from user and show results (e.g.. multiplication,division,addition,substraction)

#include <iostream>
#include <string>

using namespace std;


int multi(int num1, int num2){
    int sum = num1 * num2;
    cout<<"multiplication = "<<sum<<endl;
}

int division(int num1, int num2){
    int sum = num1 /num2;
    cout<<"division = "<<sum<<endl;
}

int addition(int num1, int num2){
    int sum = num1 + num2;
    cout<<"addition = "<<sum<<endl;
}

int substraction(int num1, int num2){
    int sum = num1 - num2;
    cout<<"substraction = "<<sum<<endl;
}

int main(){

string yn;

do{
    string name;
    cout<<"Enter your name : ";
    getline(cin,name);

    cout<<"HI! "<<name<<endl;

    int opt;

    do{
        cout<<"which operation do you want to perform??"<<endl;
        cout<<"additon(1) / substraction(2) / multipication(3) / division(4) \n= ";
        cin>>opt;

    } while(opt>5 || opt<=0);

    int num1,num2;
    cout<<"Enter your first number : ";
    cin>>num1;

    cout<<"Enter your first number : ";
    cin>>num2;

    if(opt == 1){
        addition(num1,num2);
    }
    else if(opt == 2){
        substraction(num1,num2);
    } 
    else if(opt == 3){
        multi(num1,num2);
    }
    else if(opt == 4){
        division(num1,num2);
    }

    cout<<"do want to calculate numbers again?? (y/n) : ";
    cin>>yn;
}while(yn == "y" || yn == "Y");

printf("Thanks for using this calculator");
return 0;

}