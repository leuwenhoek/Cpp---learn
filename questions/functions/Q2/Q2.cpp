// Write a C++ program that includes a function to calculate the factorial of a given non-negative integer. 

#include <iostream>

using namespace std;

int i;
int factorial(int para1){

    int sum = 1;
    int i = 1;

        while(i<=para1){

            sum = sum*i;
            i++;
        }

        cout<<"The factorial of "<<para1<<" is "<<sum<<"."<<endl;
        return sum;
}

int main(){

    int num;
    cout<<"Enter a non-negative integer: ";
    cin>>num;
     

    factorial(num);

    return 0;
}