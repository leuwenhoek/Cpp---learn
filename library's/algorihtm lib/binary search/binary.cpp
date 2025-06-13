#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    //Binary search will only work in sorted array.

    int arr[] = {0,1,2,3,4,5,6};

    int user_num;
    cout<<"enter the number you want to find : ";
    cin>>user_num;

    int size_ = sizeof(arr)/sizeof(arr[2]);

    if (binary_search(arr, arr+size_, user_num)){
        cout<<"Element found"<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }

}