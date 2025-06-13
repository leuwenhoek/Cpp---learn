// C++ program to demonstrate call by value

#include <iostream>
using namespace std;

// function to update the original value
void increment(int num)
{
    num++;
    cout << num << endl;
}

int main()
{
    int number = 5;
    increment(number); // Passing 'number' by value
    cout << number << endl;
    return 0;
}
