//getting and setting info about the user

#include <iostream>
#include <string>
using namespace std;

class info{
    public:
        string name;
        int age;
        string gender;
        string citizen_of;
        string mobile_no;

    info(){
        name = "unknown";
        age = 0;
        gender = "not define";
        citizen_of = "unknown";
        mobile_no = "0000000000";
    }    

    info(string name_, int age_, string gender_ ,string citizen_of_ ,string mobile_no_){
        name = name_;
        age = age_;
        gender = gender_;
        citizen_of = citizen_of;
        mobile_no = mobile_no;
    }

    void setname(string name_){
        name_ = name;
    }

    void setage(int age_){
        age_ = age;
    }

    void setgeder(string gender_){
        gender_ = gender;
    }

    void setcitizen(string citizen_){
        citizen_ = citizen_of;
    }

    void setmobile(string mobile_){
        mobile_ = mobile_no;
    }

    string getname(string){
        return name;    
    }

    int getage(){
        return age;
    }

    string getgender(){
        return gender;
    }

    string getcitizen(){
        return citizen_of;
    }

    string getmobile(){
        return mobile_no;
    }

    void show(string value, string message){
        cout<<message<<value<<endl;
    }
    void show(int value, string message){
        cout<<message<<value<<endl;
    }
    void show(string value){
        cout<<value<<endl;
    }
    void show(int value){
        cout<<value<<endl;
    }
    
};


int main(){
    info Ayush;
    Ayush.setname("Ayush");
    Ayush.show(Ayush.name,"Name : ");
    Ayush.show(Ayush.age,"");
}