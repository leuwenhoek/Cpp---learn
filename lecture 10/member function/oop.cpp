#include <iostream>
#include <string>

using namespace std;

class Car{
    public:                 //access modifier

        //data members (attributes)
        string colour;
        string model;
        float length;
        float breath;
        float price;
        string other_model;

        //member function
        void changeModel(string new_){
            
            new_ = other_model;
        }

        void print(){
            cout<<endl;
            cout<<"colour : "<<colour<<endl;            
            cout<<"model : "<<model<<endl;            
            cout<<"length : "<<length<<endl;            
            cout<<"price (INR): "<<price<<" Lakhs"<<endl;
            cout<<"other model: "<<other_model<<endl;

        }

    private:
        string technology;
};

int main(){

    //creating object
    Car car1;                //object 1 (car1)
    car1.colour = "White";
    car1.model = "X-01";
    car1.length = 4.5;
    car1.breath = 1.7;
    car1.price = 17.59;
    car1.changeModel("Z-01");
    car1.print();

    Car car2;                //object 2 (car2)
    car2.colour = "Black";
    car2.model = "X-02";
    car2.length = 4.3;
    car2.breath = 1.4;
    car2.price = 15.46;
    car2.changeModel("Z-02");
    car2.print();


    Car car3;               //object 3 (car3)
    car3.colour = "Red";
    car3.model = "X-03";
    car3.length = 4.2;
    car3.breath = 1.6;
    car3.price = 17;
    car3.changeModel("Z-03");
    car3.print();
}