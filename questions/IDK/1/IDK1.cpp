#include <iostream>
#include <iomanip>

using namespace std;


double ratio(double div_, double con){
        return div_/con;        
}

int main(){
    double china = 9.597, india = 3.287;

    double num1,num2;
        num1 = 800;
        num2 = 500;

    cout<<fixed<<setprecision(2);
    cout<<"India : China = "<<ratio(num2,india)<<" : "<<ratio(num1,china)<<endl;

    return 0;
}