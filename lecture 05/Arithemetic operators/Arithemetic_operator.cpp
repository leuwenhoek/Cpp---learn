//Assinment operators

#include <iostream>
#include <string>

using namespace std;

int main(){

    //variable declarations...
    int add1, add2;
    int sub1, sub2; 
    int multi1, multi2;
    int div1, div2;
    int expo1, expo2;
    int modu1, modu2;
    int increment1, increment2;
    int decrement1, decrement2;
    int sum1,sum2,sum3,sum4,sum5,sum6,sum7,sum8;

    //assining the values

    add1 = 1;
    add2 = 1;
    sum1 = add1 + add2;
    cout<<"addition = "<<sum1 <<endl;
    
    sub1 = 1;
    sub2 = 1;
    sum2 = sub1 - sub2;
    cout<<"substraction = "<<sum2 <<endl;
    
    multi1 = 1;
    multi2 = 1;
    sum3 = multi1*multi2;
    cout<<"multiplication = "<<sum3 <<endl;
    
    expo1 = 1;
    expo2 = 1;
    sum4 = expo1^expo2;
    cout<<"exponent = "<<sum4 <<endl;
    
    div1 = 1;
    div2 = 1;
    sum5 = div1/div2;
    cout<<"division = "<<sum5 <<endl;
    
    modu1 = 1;
    modu2 = 1;
    sum6 = modu1;
    sum6 = modu1 % modu2;
    cout<<"module = "<<sum6 <<endl;

    increment1 = 1;
    increment2 = 1;
    sum7 = increment1++;
    cout<<"increment = "<<sum7 <<endl;
    
    decrement1 = 1;
    decrement2 = 1;
    sum8 = decrement1--;
    cout<<"decrement = "<<sum8 <<endl;

}