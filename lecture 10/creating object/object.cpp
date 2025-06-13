#include <iostream>
#include <string>

using namespace std;

// Define a class named Teacher
class Teacher {
    public:
        // Public member variables
        string name;
        string gender;
        int teacher_no;
        int age;
        
    private:
        // Private member variables
        float salary;
        int mobile_no;
};

int main() {
    // Create an object of the Teacher class named t1
    Teacher t1;
    t1.name = "Poonam";
    t1.gender = "female";
    t1.teacher_no = 1469;
    t1.age = 29;

    // Create an object of the Teacher class named t2
    Teacher t2;
    t2.name = "Manoj";
    t2.gender = "male";
    t2.teacher_no = 1549;
    t2.age = 34;
    
    // Create an object of the Teacher class named t3
    Teacher t3;
    t3.name = "Neetu";
    t3.gender = "female";
    t3.teacher_no = 8927;
    t3.age = 37;

    // Create an object of the Teacher class named t4
    Teacher t4;
    t4.name = "Madan";
    t4.gender = "male";
    t4.teacher_no = 5388;
    t4.age = 43;

    // Print a success message
    cout << "Objects and classes created successfully!!!" << endl;

    return 0;
}