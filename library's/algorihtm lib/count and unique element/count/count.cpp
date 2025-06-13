#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    //counts the total occurrence of an element in an array

    int arr[] = {1, 2, 3, 4, 5, 1, 2};
    cout<<count(arr,arr+(sizeof(arr)/sizeof(arr[1])), 4);
}