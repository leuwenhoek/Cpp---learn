#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int arr[] = {0,1,2,3,4,5,6,7};

    int size_ = sizeof(arr)/sizeof(arr[2]);

    cout<<"minimum element : "<<*min_element(arr,arr+size_)<<endl;
    cout<<"maximum element : "<<*max_element(arr,arr+size_)<<endl;
}