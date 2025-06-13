//Declare a pointer to an integer and assign it the address of an integer variable.

#include <iostream>

using namespace std;

int main(){

    int* num;
    int i;

    num = &i;

    cout<<"Address : "<<num<<endl;
}