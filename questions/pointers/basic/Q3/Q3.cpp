//Create a pointer that points to a float variable and modify its value using the pointer.

#include <iostream>

using namespace std;

int main(){

    float var = 10.89;
    float *fptr = &var;

    cout<<"Default value of the variable : "<<var<<endl;
    
    *fptr = 2.3;
    cout<<"modified value of the variable : "<<var<<endl;

}