#include <iostream>
using namespace std;

int main() {
    int age = 25;
    bool isStudent = true;

    // Using AND operator in if condition
    if (age > 18 && isStudent) {
        cout << "Student";
    }
    else {
        cout << "Not Student";
    }
    return 0;
}