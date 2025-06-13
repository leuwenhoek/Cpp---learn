// Write a program in C++ to display n terms of natural numbers and their sum.

#include <iostream>

using namespace std;

int main(){

    int sum;
    sum = 0;

    int user_input;
    cout<<"Input a number of terms: ";
    cin>>user_input;

    for(int i = 1; i<user_input+1 ; i++){

        sum = sum + i; 
        cout<<i<<endl;
       
    }

 cout<<sum<<endl;
}