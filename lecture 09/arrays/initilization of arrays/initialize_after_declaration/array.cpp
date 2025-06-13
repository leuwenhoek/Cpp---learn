#include <iostream>

using namespace std;

int main(){

    const int size = 5;
    int declare_array[size];                                   //declare a arrary

    //initialize athe array using a loop.
    for(int i = 0; i<5; i++){

        cout<<"Enter the value at index "<<i<<" : ";
        cin>>declare_array[i];                           //assigning the value at runtime.
        }

    //Display the initialized array.
    cout<<"\n"<<"Initialized array : ";
    for (int i = 0; i < 5; i++){
        cout<<declare_array[i]<<" ";
    }
    return 0;
    
}