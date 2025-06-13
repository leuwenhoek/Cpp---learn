#include <iostream>

using namespace std;

int main(){

    int number, number_modulo;
    double number_add, number_sub, number_division, number_multiply;

    cout<<"Enter a number : ";
    cin>>number;

    number_add = number;
    number_sub = number;
    number_division = number;
    number_modulo = number;
    number_multiply = number;

    number_add += 10;
    number_sub -= 10;
    number_division /= 10;
    number_modulo %= 10;
    number_multiply *= 10;

    

    cout<<"addition : "<<number_add <<endl;
    cout<<"substraction : "<<number_sub <<endl;
    cout<<"division : "<<number_division<<endl;
    cout<<"modulo : "<<number_modulo <<endl;
    cout<<"modulo : "<<number_modulo <<endl;



}