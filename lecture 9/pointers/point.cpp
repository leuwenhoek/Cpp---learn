// pointer is a variable that stores the memory address of another variable.
//we cannot return a array in cpp(default).

#include <iostream>

using namespace std;

int main(){

    int s = 190;
    int* b = &s;

    cout<<s<<endl;
    

    // & --> (address of) of operators.
    cout<<"address of variable 'a' = "<<&s<<endl;
    cout<<"address of variable 'a' = "<<b<<endl;
    
    // * --> (value of) dereference operators. 
    cout<<"value of variable 'a' = "<<*b<<endl;

    return 0;
}