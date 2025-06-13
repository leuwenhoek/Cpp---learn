#include <iostream>
#include <vector>

using namespace std;

class Student{
    private:
        int addmission_no;
        float marks;
    private:
        string name;
        int roll_no;
        int clas;
    public:
        void init(){
            name = "unknown";
            roll_no = 0;
            clas = 0;
        }

        void display(){
            cout<<"name : "<<name<<endl;
            cout<<"roll no : "<<roll_no<<endl;
            cout<<"class : "<<clas<<endl;
        }

};

int main(){
	Student batch1;                        //create an object
    batch1.init();                          //initialize it
    batch1.display();
}