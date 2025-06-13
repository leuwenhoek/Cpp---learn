#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    // Removes the duplicated elements (sorted input required)
    int arr[] = {0, 0, 1, 1, 2, 2, 3, 3};

    int size_ = sizeof(arr) / sizeof(arr[0]); 
    int new_size = unique(arr, arr + size_) - arr; // Get new unique size

    // Print only the unique elements
    cout << "Unique elements: ";
    for (int i = 0; i < new_size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
