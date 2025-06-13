//make a person which prints the name and age attributes.

#include <iostream>

using namespace std;
class Person{
    public:
        string name;
        int age;

        //default parameter
        Person(string name_ , int age_){
            name = name_;
            age = age_;
        }
        //member function
        void display(){
            cout<<"\nName : "<<name<<endl;
            cout<<"Age : "<<age<<"\n" <<endl;
        }

        ~Person(){}

        
};

int main(){
    Person Ayush("Ayush",14);
        Ayush.display();
        
    Person GPT("GPT",100);
        GPT.display();
        
    Person god_knows("Unknown", 0);
        god_knows.display();

}