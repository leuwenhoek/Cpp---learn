#include <iostream>

using namespace std;

int main(){
    int array_without[] = {1,2,3,4};

    int size_of_array = sizeof(array_without) / sizeof(array_without[1]);   //obtaining the size of the array(array_without).
    cout<<"size of array = "<<size_of_array<<endl;
    
    cout<<"arrays value = ";
    for (int i = 0; i < size_of_array; i++){
        cout<<array_without[i];

        if (i<size_of_array-1)
        {
            cout<<",";
        }
        
    }
    
}