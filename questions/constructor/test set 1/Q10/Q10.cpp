//-----------------------------------------------------------------------------
// Ek Person class bana jisme name aur age ho.

// Parameterized constructor use karke ek array of 3 objects create kar.
// Loop me chalake sabka name aur age print kar.
//-----------------------------------------------------------------------------

#include <iostream>
#include <string>
using namespace std;

class Person{
    public:
        string name;
        int age;

        Person(string name_, int age_){
            name = name_;
            age = age_;
        }

        void print(){
            cout<<"Name : "<<name<<endl;
            cout<<"Age : "<<age<<endl;
            cout<<endl;
        }

        ~Person(){}
};
int main(){
    Person p[3] = {Person("Ayush", 14),Person("GPT", 100),Person("unknown", 100)};

    for (int i = 0; i < 3; i++){
        p[i].print();
    }
    
}