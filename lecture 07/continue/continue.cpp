#include <iostream>

using namespace std;

int main(){


    for(int i = 0; i<10; i++)
    {

        if(i == 5){                       //skips the iteration in which i = 5.
            continue;
        }

        cout<<i<<endl;
    }
    

}