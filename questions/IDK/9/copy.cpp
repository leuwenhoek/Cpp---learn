#include <iostream>

using namespace std;

void enter(string& value){
    cin>>value;
}
void enter(int& value){
    cin>>value;
}
void enter(float& value){
    cin>>value;
}
void enter(double& value){
    cin>>value;
}

int main(){
    string name;                           
    cout<<"Name : ";
    enter(name);
    
    int age;                           
    cout<<"Age : ";
    enter(age);
    
    double balance;                           
    cout<<"Balance : ";
    enter(balance);
    
    float amount;                           
    cout<<"Amount : ";
    enter(amount);
    
    cout<<"\n----------------------Details----------------------------------"<<endl;
    cout<<"Name : "<<name<<endl;
    cout<<"Age : "<<age<<endl;
    cout<<"balance : "<<balance<<endl;
    cout<<"Amount : "<<amount<<endl;
    cout<<"-------------------------------------------------------------------"<<endl;
    
}