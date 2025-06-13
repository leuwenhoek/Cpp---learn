// WAP in C++ to find the first 10 natural numbers. Sample output: The natural numbers are: 1 2 3 4 5 6 7 8 9 10

#include <iostream>

using namespace std;

int main(){

    int i;
    i = 0;

    do{
        i = i+1;
        cout<<i<<endl;
    }while(i < 10);

}