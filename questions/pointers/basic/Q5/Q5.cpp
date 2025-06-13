//Write a function that takes a pointer to an integer and doubles its value.

#include <iostream>

using namespace std;

int fun(int* ptr){
    int temp = *ptr;
    int sum = temp+temp;
    int *temp_ = &sum;
    return *temp_;
}

int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;

    int* num_ = &num;
    cout<<"after doubling the value of the number = "<<fun(num_)<<endl;

}