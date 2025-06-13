#include <iostream>
#include <string>
using namespace std;

class Base{
    private:
        string tech;
        string brand;
    public:
        string camera;
        string material;
        string processor;
        string os;

        Base(){
            camera = "50 MP";
            processor = "mediatech";
            material = "plastic";
            os = "Android 13";
        };
        void setbrand(string brand){
            this->brand = brand;
        }
        string getbrand(){
            return brand;
        }

        void display(){
            cout<<"\n------------------------------------------------------------"<<endl;
            cout<<getbrand()<<endl;
            cout<<"Material : "<<material<<endl;
            cout<<"Camera : "<<camera<<endl;
            cout<<"Processor : "<<processor<<endl;
            cout<<"Os : "<<os<<endl;
            cout<<"------------------------------------------------------------\n"<<endl;
        }
};
class Xiaomi : public Base{
    public:
        Xiaomi(){
            setbrand("Xiaomi");
            camera = "150 MP";
            os = "Hyper OS";
        }
        
};
class Redmi : public Xiaomi{
    public:
        Redmi(){
            setbrand("Redmi");
            processor = "snapdragon";
            material = "titanium";
        }
};

int main(){
    Base b1;
        b1.display();
    Xiaomi x1;
        x1.display();
    Redmi r1;
        r1.display();

}