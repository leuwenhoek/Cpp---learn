#include <iostream>
#include <string>

using namespace std;

int main(){

    int order;
    cout<<"Enter your order (tea(1) or coffee (2))? :";
    cin>>order;

    if (order == 1 || order == 2){
        cout<<"order placed"<<endl;
    }

    else{
        cout<<"enter a valid option"<<endl;
    }
}