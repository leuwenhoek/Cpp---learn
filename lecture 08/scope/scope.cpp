#include <iostream>
#include <string>

using namespace std;

string globle_variable = "globle variable ";                                  //this is a globle variable, which can be accessed by 'any function'.

void ayush(){

    string ayush_variable;                                                 //this is a variable that can be used only inside the 'ayush' function. 
    ayush_variable = "this variable will only work in 'ayush' function.";
    cout<<ayush_variable<<endl;
    cout<<globle_variable<<"by ayush function\n"<<endl;                  //using the globle variable inside the ayush function.

}

void paneer(){                                                            

    string paneer_variable;                                       //this is a variable that can be used only indide the 'paneer' function.
    paneer_variable = "this variable will only work in 'paneer' function.";
    cout<<paneer_variable<<endl;
    cout<<globle_variable<<"by paneer function \n"<<endl;

}

int main(){

    paneer();                                                           //calling the ayush function.                               
    ayush();                                                           //calling the paneer function.
    cout<<globle_variable<<"by main function\n"<<endl;                //using the globle variable inside the main function.  
    return 0;
}