#include <iostream>
using namespace std;

int main() {

    int n = 7;

    // using logical or for conditional statement
    if (n <= 0 || n >= 10) {
        cout << "n is not in range [0, 10]";
    }
    else {
        cout << "n is in range [0, 10]";
    }

    return 0;
}