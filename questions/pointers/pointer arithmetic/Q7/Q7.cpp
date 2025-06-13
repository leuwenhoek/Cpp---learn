//Create an array and access its elements using a pointer.

#include <iostream>

using namespace std;

int main(){

    int arr[] = {1,2,3,4,5,6,7};
    int size_ = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i < size_; i++){
        int* ptr;
        ptr = &arr[i];
        cout<<"\nMemory location of "<<arr[i]<<" at index "<<i<<" is "<<ptr;
    }
    
}