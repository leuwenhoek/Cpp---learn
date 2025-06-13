#include <iostream>

using namespace std;

int main() {

    // One dimensional array
    int myArray[5] = {10, 20, 30, 40, 50};

    // We can print all of these elements using for loop.
    cout << "myArray = ";
    for (int i = 0; i < 5; i++) {
        cout << myArray[i];
        if (i < 4) {
            cout << ", ";
        }
    }
    cout << endl;

}