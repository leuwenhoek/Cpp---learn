#include <iostream>
using namespace std;

int main() {

    bool isLoggedIn = false;

    // using logical not operator
    if (!isLoggedIn) {
        cout << "Please log in.";
    }
    else {
        cout << "Welcome to GeeksforGeeks!";
    }

    return 0;
}