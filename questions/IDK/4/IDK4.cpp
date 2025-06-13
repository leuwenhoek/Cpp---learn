#include <iostream>
using namespace std;

void show(int arr[], int size_){
    for (int i = 0; i < size_; i++){
        cout << arr[i];
        if (i != size_ - 1) cout << ",";
    }
}

int logic(int arr[], int size_){
    int ans = arr[0]; 
    for (int i = 1; i < size_; i++){
        if (arr[i] > ans){
            ans = arr[i];
        }
    }
    return ans;
}

int main(){
    int size_;
    cout << "Enter the size of the array: ";
    cin >> size_;

    int* arr = new int[size_];

    for (int i = 0; i < size_; i++){
        cout << "Enter value at index [" << i << "]: ";
        cin >> arr[i];
    }

    cout << "\nYour array: ";
    show(arr, size_);

    int result = logic(arr, size_);
    cout << "\n\nHighest number in your array = " << result << endl;

    delete[] arr; // Memory free 
}
