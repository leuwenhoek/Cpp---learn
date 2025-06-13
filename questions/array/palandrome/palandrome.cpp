#include <iostream>

using namespace std;

int pala(int array1[4], int array2[4]){

    int com[4];
    for (int i = 0;i < 4; i++){
        for (int l = 3; l > 0; l--){
            com[i] = array1[l];
        }
        
    }
    

    for (int i = 0; i < 4; i++)
    {
        cout<<array2[i];
    }
    

    if(array2 == array1){
        cout<<"Your arrays are palandrome.";
    }
    else if(array2 != array1){
        cout<<"Your arrays are not palandrome.";

    }
    
    return 0;
}

int array_print(int array_rn[4]){


    cout<<"Your array : ";
    for(int i = 0; i<4; i++){
        cout<<array_rn[i];

        if(i<=2){
            cout<<",";
        }
    }
    cout<<endl;
    return 0;
}
int main(){

//Array1

    int array1[4];
    
    cout<<"<--Initialize Array 1-->"<<endl;
    
    cout<<" Enter the value at index 0 : ";
    cin>>array1[0];

    cout<<" Enter the value at index 1 : ";
    cin>>array1[1];

    cout<<" Enter the value at index 2 : ";
    cin>>array1[2];

    cout<<" Enter the value at index 3 : ";
    cin>>array1[3];

    //Array2

    int array2[4];
    
    cout<<"<--Initialize Array 2-->"<<endl;
    
    cout<<" Enter the value at index 0 : ";
    cin>>array2[0];

    cout<<" Enter the value at index 1 : ";
    cin>>array2[1];

    cout<<" Enter the value at index 2 : ";
    cin>>array2[2];

    cout<<" Enter the value at index 3 : ";
    cin>>array2[3];

    //Function call
        //printing the arrays

        array_print(array1);
        array_print(array2);
    
        //finding that the array is palandrome or not

        pala(array1, array2);



}