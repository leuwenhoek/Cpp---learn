//Write a function that reverses an array using pointers.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void reverseArray(int* arr, int size) {
    std::reverse(arr, arr + size);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    reverseArray(arr, size);

    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }

    return 0;
}