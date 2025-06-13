//product of array except itself

//Method
//---> divide this array in two parts

#include <iostream>
using namespace std;

int globle = 0;
bool is_zero(int num[], int size_){
    

    for (int i = 0; i < size_; i++){
        if(num[i] == 0){
            return true;              
        }
    }

    return false;
}

int index(int num[], int size_){
    

    for (int i = 0; i < size_; i++){
        if(num[i] == 0){
            return i;              
        }
    }

    return 0;
}
void answer(int num[], int size_){
    
    int* answer = new int [size_];
    int manupulated_total = 1;

    for (int i = 0; i < size_; i++){
        if(num[i] != 0){
            manupulated_total *= num[i];
        }
        
    }

    
    if(is_zero(num,size_) == false){
    
        
        for (int i = 0; i < size_; i++){
            if (num[i] == 0){
            answer[i] = manupulated_total;
            }
            else{
                answer[i] = manupulated_total/num[i];
            }
        }
    }
    else if(is_zero(num,size_) == true){
        for (int i = 0; i < size_; i++){
            if(i == index(num,size_)){
                answer[i] = manupulated_total;
            }
            else if(i != index(num,size_)){
                answer[i] = 0;
            }
        }
        
    }

    
    cout<<"Answered : ";
    for (int i = 0; i < size_; i++){
        if(i < size_-1){
            cout<<answer[i]<<",";
            continue;
        }
        else{
            cout<<answer[i];
            continue;
        }
    }

    delete[] answer;   
}
int main(){
    int size_ = 0;
    int* arr = new int [size_];

    cout<<"Make an array :-"<<endl;
    cout<<"Enter the size of the array = ";
    cin>>size_;
    for (int i = 0; i < size_; i++){
        cout<<"Enter the number at index ["<<i<<"] : ";
        cin>>arr[i];
    }

    cout<<"num = ";
    for (int i = 0; i < size_; i++){
        if(i<size_-1){
        cout<<arr[i]<<",";
        }
        else{
            cout<<arr[i]<<endl;
        }
    }

    answer(arr, size_);
    
}