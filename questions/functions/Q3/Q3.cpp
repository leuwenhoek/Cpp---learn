// Write a C++ program that includes a function to check if a given number is prime (using, while loop)

#include <iostream>

using namespace std;

int num;

int isprime(int num){

    int i = 2;
    bool returnf = false;
    
    while(true){

        if(num%i == 0){
            cout<<num<<" is not a prime number.";
            return false;
        }

        else if(num%i != 0){
            cout<<num<<" is a prime number.";
            return true;
        }

        else{
            continue;
        }
        i++;
    }


}

int main(){


    while(true){
        cout <<"Enter a positive integer: ";
        cin>>num;

        if (num < 0 ){
            cout << "<<<< You entered an invalid number please enter a valid number. >>>>" << endl;
            continue;
        }
        else if(num>=0){
            break;
        }

    }
    
    isprime(num);
    return 0;
}