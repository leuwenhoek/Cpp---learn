// Write a program in C++ to find the sum of the first 10 natural numbers. Sample Output: Find the first 10 natural numbers: The sum of first 10 natural numbers: 55.

#include <iostream>

using namespace std;

int main(){

    int sum,num;
    sum = 0;

    for(int i = 1; i<11; i++){

        sum = sum + i;

        if( i < 10){
        cout<<i<<" + ";
        }
        else if ( i == 10)
        cout<<i<<" = ";
    }

cout<<sum<<endl;
cout<<"code executed successfully"<<endl;
}