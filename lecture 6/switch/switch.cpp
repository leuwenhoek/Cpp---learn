#include <iostream>

using namespace std;

int main(){

    int opt;
    cout<<"Game menu"<<endl;
    cout<<"1.) Home"<<endl;
    cout<<"2.) setting"<<endl;
    cout<<"3.) volume"<<endl;
    cout<<"4.) EXIT"<<endl;
    
    cout<<"in which page you want to go?? (enter the number)"<<endl;
    cin>>opt;

    switch(opt){
        case 1 : 
            cout<<"redirecting to the Home page...."<<endl;
            break;
        case 2 :
            cout<<"redirecting to the setting page...."<<endl;
            break;
        case 3 :
            cout<<"redirecting to the volume page...."<<endl;
            break;
        case 4 :
            cout<<"Exiting the page...."<<endl;
            break;
            
        default:
            cout<<"Invalid option"<<endl;
            break;
    }
}