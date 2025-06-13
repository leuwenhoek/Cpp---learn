#include <iostream>
#include <vector>

using namespace std;

class List{
    public:
        vector<string>dairy;
        vector<string>vegetables;
        vector<string>fruits;

         //parameter constructor    
    List(vector<string> dairy_, vector<string> vegetables_, vector<string> fruits_){            
        dairy = dairy_;
        vegetables = vegetables_;
        fruits = fruits_;
        cout<<"constructor called"<<endl;
    }

    //copy construstor                  (this is created manually)
    List(List& object){
        cout<<"I am a custom copy constructor"<<endl;
        dairy = object.dairy;
        vegetables = object.vegetables;
        fruits = object.fruits;
    }

    //destructor. (making the memory free) 
    ~List(){
        // Syntax of body - delete object;
        //vectors will cleaned up automatically
        // No need to declare destructor at all
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
        //l1.list_print();
        
    List l2(l1);             //custom copy constructor
        l2.list_print();     /* there is also a default copy constuctor */
        return 0;
        
}