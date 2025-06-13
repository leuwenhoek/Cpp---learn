#include <iostream>

using namespace std;

// returnType functionName(parameter1,parameter2,.....){
//     functionBody
// }

int add (int num1, int num2){                               // declaring a function named "add"
    int sum = num1 + num2;
    cout<<"answers = "<<sum<<endl;
}

int main(){

    int a,b;
    cout<<"enter your first number : ";
    cin>>a;
    cout<<"enter your first number : ";
    cin>>b;

    add(a,b);                                                // function call

}