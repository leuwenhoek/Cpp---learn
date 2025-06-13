#include <iostream>
#include <string>

using namespace std;

class Compile{
    public:
        string name;
        Compile(){
            cout<<"Default constructor called...."<<endl;
        }
        Compile(string name){
            this->name = name;
            cout<<"parameterized constructor called...."<<endl;
        }
};

int main(){
    Compile n;
    Compile m;
    Compile l("Ayush");
}