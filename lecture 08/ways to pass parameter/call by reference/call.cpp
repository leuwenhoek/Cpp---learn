// C++ program to demonstrate the working of call by
// reference

#include <iostream>
using namespace std;

// function to update the original value
void increment(int& num)
{
    num++;
    cout << num << endl;
}

int main()
{
    int number = 5;
    increment(number); // Passing 'number' by reference
    cout << number << endl;
    return 0;
}