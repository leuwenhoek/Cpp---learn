#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    int arr[] = {1,2,3,4,5,6,7};

    int size_ = sizeof(arr)/sizeof(arr[5]);

    reverse(arr, arr+size_);

    cout<<"reversed array -- ";
    for (int i = 0; i < size_; i++){
        cout<<arr[i]<<" ";
    }
    
}