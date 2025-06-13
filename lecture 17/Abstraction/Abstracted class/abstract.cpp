#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Template{
    private:
        string type;
    protected:
        string colour;
        float breath;
        float length;
        float area;
    public:
        virtual string Colour() = 0;
        virtual float Breath() = 0;
        virtual float Length() = 0;
        virtual float Area() = 0;

        void settype(string type){this->type = type;}
        string gettype(){return type;}

        void display(){
            cout<<"\n---------------------------------------------------------------------------------"<<endl;
            cout<<type<<"'s colour : "<<colour<<endl;
            cout<<type<<"'s breath : "<<breath<<" m"<<endl;
            cout<<type<<"'s length : "<<length<<" m"<<endl;
            cout<<fixed<<setprecision(2)<<gettype()<<"'s area : "<<area<<" m^2"<<endl;
            cout<<"---------------------------------------------------------------------------------\n"<<endl;
        }
};

class house :public Template{
    public:
        house(){
            Colour();
            Breath();
            Length();
            Area();
            settype("House");
        }
        string Colour()override{
            colour = "blue";
            return colour;
        }
        float Breath()override{
            breath = 15.6;
            return breath;
        }    
        float Length()override{
            length = 15.6;
            return length;
        }    
        float Area()override{
            area = breath*length;
            return area;
        }    
};

class hospital :public Template{
    public:
        
        string Colour()override{
            colour = "White";
            return colour;
        }
        float Breath()override{
            breath = 145.6;
            return breath;
        }    
        float Length()override{
            length = 152.6;
            return length;
        }    
        float Area()override{
            area = breath*length;
            return area;
        } 
        
        hospital(){
            Colour();
            Breath();
            Length();
            Area();
            settype("Hospital");
        }
};

int main(){
    house h1;
    h1.display();

    hospital hosp1;
    hosp1.display();
}
