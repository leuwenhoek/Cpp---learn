#include <iostream>
#include <string>

using namespace std;

// Define a class named Student
class Student {
    public:
        // Public member variables
        string name;          // Student's name
        string gender;        // Student's gender
        int clas;             // Student's class
        char sec;             // Student's section
        int roll_no;          // Student's roll number
        int addmission_no;    // Student's admission number
        
    private:
        // Private member variable
        float total_marks;    // Student's total marks
};

int main() {
    // Print a success message
    cout << "Class created successfully !!!" << endl;

    return 0;
}