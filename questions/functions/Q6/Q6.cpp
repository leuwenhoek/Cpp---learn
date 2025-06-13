//counting the number of digits in a number.

#include <iostream>

using namespace std;

int count(int num){
    
    int i = 0;
    while (i<=num){
        num /= 10;
        i++;
    }
    
    return i+1;
    
}
int main(){

    int num;
    cout<<"Enter the number : ";
    cin>>num;

    cout<<count(num);
    
}