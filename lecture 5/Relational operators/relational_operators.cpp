#include <iostream>

using namespace std;

int main(){

    int my_num = 100;

    int user_num;

    cout<<"Enter a number : ";
    cin>>user_num;

    if(user_num > my_num){
        cout<<"your number is greater than mine."<<endl;
    }

    else if(user_num < my_num){
        cout<<"your number is smaller than mine."<<endl;
    }

    cout<<"again choose a number :";
    cin>>user_num;

    my_num = 69;

    if(my_num != user_num){
        cout<<"your number is not equal to my number";
    }
    else if(my_num == user_num){
        cout<<"your number is equal as mine";
    }

    cout<<"again choose a number : ";
    cin>>user_num;

    my_num = 140;

    if(user_num <= my_num){
        cout<<"your number may be greater then me or equal to me"<<endl;
    }
    else if(user_num >= my_num){
        cout<<"your number may be smaller then me or equal to me"<<endl;
    }

    cout<<"END"<<endl;
}