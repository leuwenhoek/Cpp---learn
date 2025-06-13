#include <iostream>
#include <string>
using namespace std;

int main(){

    string *sptr;
    sptr = new string;
    *sptr = "My name is Ayush.";
    cout<<"str Address : "<<sptr<<endl;
    cout<<"str Value : "<<*sptr<<endl;
    cout<<endl;
    delete sptr;

    int *iptr;
    iptr = new int;
    *iptr = 45;
    cout<<"int Address : "<<iptr<<endl;
    cout<<"int Value : "<<*iptr<<endl;
    cout<<endl;
    delete iptr;


    bool *bptr;
    bptr = new bool;
    *bptr = true;
    cout<<"bool Address : "<<bptr<<endl;
    cout<<"bool Address : "<<*bptr<<endl;
    cout<<endl;
    delete bptr;


    char *cptr;
    cptr = new char;
    *cptr = 'a'; 
    cout<<"char Address : "<<static_cast<void*>(cptr)<<endl;
    cout<<"char value : "<<*cptr<<endl;
    cout<<endl;
    delete cptr;


    float *fptr;
    fptr = new float;
    *fptr = 12.32;
    cout<<"float Address : "<<fptr<<endl;
    cout<<"float value : "<<*fptr<<endl;
    delete fptr;

    
}