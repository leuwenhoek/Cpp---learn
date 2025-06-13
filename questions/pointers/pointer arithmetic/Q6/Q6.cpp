//Write a program that demonstrates pointer arithmetic (increment, decrement, addition, subtraction).

#include <iostream>

using namespace std;

int main (){
    int n = 88810;
    cout<<"Size of integer n : "<<sizeof(n)<<endl;
    cout<<"memory address of n : "<<&n<<endl;
    
    //creating pointer
    int *ptr = &n;
    cout << "\nInitial pointer value: " << *ptr << endl;
    cout << "Initial pointer address: " << ptr << endl;


    //increment in pointer
    ptr++;
    cout<<"\nIncrement : "<<ptr<<endl;
    
    //decrement in pointer
    ptr--;
    cout<<"\nDecrement : "<<ptr<<endl;

    //addition in pointer
    ptr = ptr + 1;
    cout<<"\nAddition : "<<ptr<<endl;

    //substraction in pointer
    ptr = ptr-1;
    cout<<"\nSubstraction : "<<ptr<<endl;
}