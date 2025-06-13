//----------------------------------------------------------------------------------------------
// Default + Parameterized Constructor Together:

// make a Student class which have default constructor which prints "Default student created".
// it shouuld contain a parameterized constructor which sets the name and roll no.
// check both default and parameterized constructor.
//----------------------------------------------------------------------------------------------

#include <iostream>

using namespace std;

class Student{
    public:
        string name;
        int roll_no;

        Student(){
            cout<<"\ndefault constructor created"<<endl;
            name = "unknown";
            roll_no = 0;
        }

        Student(string name_, int roll_no_){
            name = name_;
            roll_no = roll_no_;
        }

        void details(){
            cout<<"Name : "<<name<<endl;
            cout<<"Roll no : "<<roll_no<<endl;
        }

        ~Student(){}
};
int main(){

    //setting the parameters
    Student Ayush("Ayush",10);
        Ayush.details();

    //default parameters
    Student unknown;
    unknown.details();
}
