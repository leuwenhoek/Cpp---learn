#include <iostream>

using namespace std;

//makes a template 
class Laptop{
    public:
        string cpu;
        string gpu;
        string display;
        string body;

    public:

        virtual void CPU() = 0; 
        virtual void GPU() = 0; 
        virtual void Display() = 0; 
        virtual void Body() = 0;

        void show(){
            cout<<"\n---------------------------------------------------------"<<endl;
            cout<<"CPU : "<<cpu<<endl;  
            cout<<"GPU : "<<gpu<<endl;  
            cout<<"Display : "<<display<<endl;  
            cout<<"Body : "<<body<<endl;  
            cout<<"---------------------------------------------------------\n"<<endl;
        }
};

class Acer : public Laptop{
    public:

    Acer(){
        CPU();
        GPU();
        Body();
        Display();
    }
                
        void CPU() override{
            cpu = "Intel Core i5-1240P";
        }
        void GPU() override{
            gpu = "Intel Iris Xe";
        }
        void Display() override{
            display = "14 FHD (1920x1080)";
        }
        void Body() override{
            body = "metal";
        }
};

int main(){
    Acer l1;
    l1.show();
}