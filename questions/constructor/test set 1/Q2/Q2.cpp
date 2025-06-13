//---------------------------------------------------------
// Ek Student class bana jisme name aur rollNo ho.

// Parameterized constructor se values set karein.
// Ek object bana ke print kar.
//---------------------------------------------------------

#include <iostream>
#include <string>

using namespace std;

class Student{
    public:
        string name;
        int rollno;

        Student(){
            name = "unknown";
            rollno = 0;
        }
        Student(string name_ , int rollno_){
            name = name_;
            rollno = rollno_;
        }

        void details(){
            cout<<"Name : "<<name<<endl;
            cout<<"Roll no : "<<rollno<<endl;
        }

        ~Student(){}
};

int main(){
    Student s1("Ayush",10);
        s1.details();
return 0;
}