//Implement a function that returns the maximum element in an array using pointers.

#include <iostream>
#include <vector>

using namespace std;

int fun(int *arr,int size_){
    int *maxel = arr;

    for (int i = 1; i < size_; i++){
        if(*(arr + i) > *maxel){
            maxel = (arr+i);
        }
    }
    return *maxel;
}

int main(){
    vector<int> arr;
    bool condition;
    bool var = true;
    string user_opt;
    int value;
    int i = 0;
    do{
        cout<<"Enter the value at index "<<i<<" : ";
        cin>>value;
        arr.push_back(value);

        do{
        cout<<"Do you want to enter the next element in the array (y/n) : ";
        cin>>user_opt;
            if(user_opt == "y"){
                condition = true;
                var = false;
            }
            else if(user_opt == "n"){
                condition = false;
                var = false;
            }
            else{
                cout<<"\nEnter a valid choice -----"<<endl;
                condition = true;
                var = true;
            }
        }while(var);
        i++;
    }while (condition);
        
    int size_ = arr.size();

    cout<<"\nYour array : ";
    for(int i = 0; i<size_ ;i++){
        if(i == size_){
            cout<<"."<<endl;
        }
        else if(i<size_){
        cout<<arr[i]<<",";
        }    
    }
    cout<<"\nmaximum element"<<fun(arr.data(), size_)<<endl;
}