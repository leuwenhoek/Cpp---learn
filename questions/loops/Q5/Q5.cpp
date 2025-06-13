// Write a program in C++ to check whether a number is prime or not.

#include <iostream>

using namespace std;

int main(){

    int num;
    cout<<"Input a number to check prime or not: ";
    cin>>num;

    for(int i = 1; i<=num; i++){

        if(i%num == 0){
            cout<<num<<" is not a prime number.";
            
        }
        else if (i%num != 0){
            cout<<num<<" is a prime number.";
        }
        
    }
}