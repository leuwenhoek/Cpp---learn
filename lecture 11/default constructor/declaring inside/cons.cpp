#include <iostream>
#include <vector>

using namespace std;

class List{
    public:
        vector<string>dairy;
        vector<string>vegetables;
        vector<string>fruits;
    
    List(){                          //default constructor
        dairy = {"not found"};
        vegetables = {"not found"};
        fruits = {"not found"};
        cout<<"constructor called"<<endl;
    }

    void list_print(){
        //printing dairy products
        cout<<"\n* diary product list : ";
        for (string i : dairy){
            cout<<i<<endl;
        }
        
        //printing vegetable list
        cout<<"\n* vegetable product list : ";
        for (string i : vegetables){
            cout<<i<<endl;
        }

        //printing fruit list
        cout<<"\n* fruits product list : ";
        for (string i : fruits){
            cout<<i<<endl;
        }
    }
    private:
        int budget;
    
};

int main(){
    List l1;
        l1.list_print();
        return 0;
        
}