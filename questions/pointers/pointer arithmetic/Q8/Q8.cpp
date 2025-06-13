//Write a program that finds the sum of all elements in an array using pointers.

#include <iostream>

using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int size_ = sizeof(arr)/sizeof(arr[0]);
    
    int sum = 0;
    for (int i = 0; i < size_; i++){
        int* ptr;
        ptr = &arr[i];
        sum += *ptr;
    }
    cout<<"the sum of all elements in an array = "<<sum;
    
}