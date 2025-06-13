#include <iostream>

using namespace std;

class Ayush{
    public:
    string name;
    int age;
    string DOB;

    Ayush();

    void display(){
        cout<<"name : "<<name<<endl;
        cout<<"age : "<<age<<endl;
        cout<<"DOB : "<<DOB<<endl;
    }
};

Ayush::Ayush(){
    name = "Unknown";
    age = 0;
    DOB = "not defined";
}

int main(){
    Ayush obj1;
    obj1.display();
}