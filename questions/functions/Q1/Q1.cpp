// Write a program that includes two functions: calculateC(int A, int B) that returns A^2 + 2*A*B + B^2 calculateD(int A, int B) that returns A + B Use these functions to calculate and print the results for three sets of inputs.


#include <iostream>

using namespace std;

int A;
int B;

int calculateC(int A, int B){

    int sum = A*A + 2*A*B + B*B;
    cout<<sum<<endl;
    return sum;
}
int calculateD(int A, int B){

    int sum = A + B;
    cout<<sum<<endl;
    return sum;
}

int main(){

    for(int i = 0; i<3; i++){

    cout<<"enter your first number : ";
    cin>>A;
    cout<<"enter your second number : ";
    cin>>B;

    calculateC(A,B);
    calculateD(A,B);
    }

}