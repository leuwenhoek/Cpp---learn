//Swap two integer values using pointers.

#include <iostream>

using namespace std;

int main(){

    int num1 = 10;
    int num2 = 20;

    cout<<"number 1 = "<<num1<<endl;
    cout<<"number 2 = "<<num2<<endl;

    //swaping the values

    int *swap = &num1;
    int *swap_ = &num2;
    
    int temp = *swap;     // swap_ = 20
    *swap = *swap_;
    *swap_ = temp;        // swap = 10
    cout<<"swaped number 1 = "<<*swap<<endl;
    cout<<"swaped number 2 = "<<*swap_<<endl;
    

}