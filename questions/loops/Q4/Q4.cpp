// Write a program in C++ to find the perfect numbers between 1 and 500.

#include <iostream>

using namespace std;

int main(){

    int num,sum;
    num = 500;
    sum = 0;

    for(int i = 2; i<num; i++)
    {
        sum = 0;

        for(int div= 1; div<i ; div++)
        {
            if (i % div == 0)
            {
                sum = sum + div;
            }
        }
            if(sum == i)
            {
                cout<<i<<endl;
            }
        
        
    }


}