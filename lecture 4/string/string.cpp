//string in C++

#include <iostream>
#include <string>

using namespace std; 

int main(){
    string Tea_name = "masala Tea";
    string about_the_tea = "This is a \"spicy\" tea";                   //used a escape character to print double quotes
    string about_me = "My name is Ayush \n I am a student \n i am learning c++"; //used a escape character to print new line
  
    cout << Tea_name << endl;
    cout << about_the_tea << endl;
    cout<< "by using n escape character" <<endl;
    cout<< about_me << endl;

    return 0;
}