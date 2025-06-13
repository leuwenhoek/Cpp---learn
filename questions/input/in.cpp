#include <iostream>

using namespace std;

int fab(int val){
    int value;
    int *store = new int [val];
    store[0] = 1; 
    store[1] = 1; 

    for (int i = 2; i < val; i++){
        store[i] = store[i-2] + store[i-1];
    }
    
    int result = store[val-1];
    delete[] store;
    return result;
}

int main(){
    int num;
    cout<<"Input : ";
    cin>>num;

    cout<<"Output : ";

    if(num <= 0){
        cout<<"Invalid input..."<<endl;
        return 0;
    }
    else{
        cout<<fab(num)<<endl;
    }
}