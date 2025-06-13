#include <iostream>
#include <vector>

using namespace std;

class List{
    public:
        vector<string>dairy;
        vector<string>vegetables;
        vector<string>fruits;
    
        //Inside parameter constructor
    List(vector<string> dairy_, vector<string> vegetables_, vector<string> fruits_){
        dairy = dairy_;
        vegetables = vegetables_;
        fruits = fruits_;
        cout<<"constructor called"<<endl;
    }

    void list_print(){
        //printing dairy products
        cout<<"\n* diary product list : ";
        for (string i : dairy){
            cout<<i;
        }
        
        //printing vegetable list
        cout<<"\n* vegetable product list : ";
        for (string i : vegetables){
            cout<<i;
        }

        //printing fruit list
        cout<<"\n* fruits product list : ";
        for (string i : fruits){
            cout<<i;
        }
    }
    private:
        int budget;
    
};

int main(){

    List l1({"milk,"," butter, ","curd "},{"potato, ","tomato "},{"Apple, ","banana, ","orange "});
        l1.list_print();
        
        return 0;
        
}