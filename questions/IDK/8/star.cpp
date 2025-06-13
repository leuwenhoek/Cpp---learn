#include <iostream>
using namespace std;

void star(int num){
    for (int i = 1; i <= num; i++){
        for (int m = 1; m <= i; m++){
            cout<<"*";
            if (m == i){
                cout<<endl;
            }
            
        }
        
    }
}

void rev_star(int num){
    int temp = num;

    for (int i = 1; i <= num; i++){
        for (int m = 1; m <= temp; m++){
            cout<<"*";
            if (m == temp){
                cout<<endl;
            }
        }   
        temp--;
    }
}

int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;

    while(true){
        int opt;
        cout<<"\nDo you want to print the :- "<<endl;
        cout<<"1. normal star pattern"<<endl;
        cout<<"2. revesed star pattern"<<endl;
        cout<<"3. both star pattern"<<endl;
        cout<<"choose = ";
        cin>>opt;

        if(opt == 1){
            star(num);
            break;
        }
        else if(opt == 2){
            rev_star(num);
            break;
        }
        else if (opt == 3){
            star(num);
            break;
        }
        else{
            cout<<"Choose a valid option....."<<endl;
            continue;
        }
        char opt;
        cout<<"Do you want to print the pattern again??"<<endl;
        cout<<"(y/n) = ";
        cin>>opt;

        if(opt == 'y'){
            continue;
        }
        else if(opt == 'n'){
            continue;
        }
        
    }
    rev_star(num);
    
}