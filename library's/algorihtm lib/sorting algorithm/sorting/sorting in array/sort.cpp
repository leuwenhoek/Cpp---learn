#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    // int arr[] = {0,8,2,1,3,4,6,5};

    int arr[6];
        arr[0] = {2};
        arr[1] = {8};
        arr[2] = {7};
        arr[3] = {4};
        arr[4] = {3};
        arr[5] = {5};

    int size_ = sizeof(arr)/sizeof(arr[0]);

    sort(arr, arr+size_);

    cout<<"sorted array -- ";
    for(int i = 0; i < size_; i++ ){
        cout<<arr[i]<<" ";
    }

}
