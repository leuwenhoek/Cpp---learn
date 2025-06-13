#include <iostream>
#include <string>

using namespace std;

int main(){
    string name;
    cout << "Enter your name: ";
    getline(cin, name);                                  //getline is used to take input of string type values

    cout<< name << endl;


    int age;
    cout<< "Enter your age : ";
    cin>> age;

    cout<< age << endl;                                  //this method of taking input works for any datatype values
    return 0;
}