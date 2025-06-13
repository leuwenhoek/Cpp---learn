#include <iostream>

using namespace std;

void print(int arr[],int size_,string message,string message2){

    cout<<message;
    for(int i = 0; i<size_; i++){
        if(i == size_-1){
            cout<<arr[i]<<" ";
        }
        else{
            cout<<arr[i]<<",";

        }
    }
    cout<<message2<<endl;

}

int right(int arr[], int size_, int index){
    int y = 1;
        for (int i = index+1; i <size_; i++){
            y *= arr[i];
        }
        return y;
}


int left(int arr[], int size_, int index){
    int x = 1;
    for (int i = index-1; i>=0; i--){
        x = x*arr[i];
    }
    return x; 
}    



void answer(int arr[], int size_){
    int* answer = new int (size_);
    for (int i = 0; i < size_; i++){
        answer[i]=right(arr,size_,i)*left(arr,size_,i);
    }

    print(answer,size_,"Ans : [","]");   
    delete[] answer;
}

int main(){

    int size_;
    cout<<"Make a Array :-"<<endl;
    cout<<"How many numbers do you want in your array?? = ";
    cin>>size_;
    int* arr;
    arr = new int {size_};
    for (int i = 0; i < size_; i++){
        cout<<"Enter the value at index ["<<i<<"] : ";
        cin>>arr[i];        
    }

    print(arr,size_,"Your Array: [","]");   
    answer(arr,4);
    delete[] arr;
}