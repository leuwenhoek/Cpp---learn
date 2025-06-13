#include <iostream>
#include <string>

using namespace std;

void overload(int para1,int para2){

    int sum = para1 + para2;
    cout<<sum<<endl;
}

void overload(double para1, double para2){

    double sum = para1 + para2;
    cout<<sum<<endl;
}

int main(){

   //now "overload" function can do operations in both datatypes (e.g.. 'double' and 'int')
    overload(1,2);         
    overload(1.2,2.5);
}