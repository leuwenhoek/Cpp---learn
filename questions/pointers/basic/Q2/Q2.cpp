//Write a program to print the address and value of a variable using a pointer.

#include <iostream>

using namespace std;

int main(){

        int i = 50;
        int* address = &i;

        cout<<"address of i : "<<address<<endl;
        cout<<"value of i : "<<i<<endl;
}

