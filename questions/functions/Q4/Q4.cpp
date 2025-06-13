// Write a C++ program that includes a function to check if a given number is prime (using, for loop)

#include <iostream>
#include <string>

using namespace std;


string prime(int num){
 

    for(int i = 2; i<=num-1; i++){
        
        if(num%i == 0){
            return "not prime";
            break;
        }  
    }

    return "is prime";

}
int main(){

    int num;
    cout<<"Enter a number : ";
    cin>>num;

    prime(num);

    if(prime(num) == "not prime"){
        cout<<num<<" is not a prime number"<<endl;
    }

    else if(prime(num) == "is prime"){
        cout<<num<<" is a prime number"<<endl;
    }

    
}
