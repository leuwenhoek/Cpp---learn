#include <iostream>
#include <vector>

using namespace std;

bool linear_search(int my_array[],int size_, int value){
    for (int i = 0; i < size_; i++){
        if (my_array[i] == value){
            return true;
        }
        
    }
    return false;
    
}
int main(){

    int arr[] = {0,1,2,3,4,5,6};

    int arr_search = sizeof(arr)/sizeof(0);

    if(linear_search(arr,arr_search,43) == true){
        cout<<"Element found"<<endl;
    }
    else if (linear_search(arr,arr_search,43) != true){
        cout<<"Element not found"<<endl;
    }
}