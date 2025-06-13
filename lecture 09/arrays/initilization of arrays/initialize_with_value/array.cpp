//Initialize value with value.

#include <iostream>

using namespace std;

int main(){

    int my_array[5] = {0,1,2,3,4};

    cout<<"Array = ";
    for (int i = 0; i < 5; i++){
        cout<<my_array[i];

        if(i<4){
            cout<<",";
        }
        else{
            continue;
        }
    }
    
    return 0;
}