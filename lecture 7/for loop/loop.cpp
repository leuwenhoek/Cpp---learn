#include <iostream>

using namespace std;

int main(){

    int num;
    cout<<"Enter the number of times you want to run the loop : ";
    cin>>num;

    for ( int i; num <= 2 ; num++)
    {
        cout<<num<<endl;
    }
    cout<<"executed successfully";

}