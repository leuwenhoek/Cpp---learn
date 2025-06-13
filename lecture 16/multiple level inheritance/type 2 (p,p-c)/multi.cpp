#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class offline{
    public:
        string className;
        double fees;
        string duration;
        string mode;
        string location;

        offline(){
            className = "Aakash coaching center";
            fees = 79294.23;
            duration = "3 hrs";
            mode = "offline";
            location = "janakpuri";
        }
    public:
        void show(){
            cout<<"\n---------------------------------"<<mode<<" mode ------------------------"<<endl;
            cout<<"Mode : "<<mode<<"\n"<<endl;
            cout<<"Coaching name : "<<className<<endl;
            cout<<fixed<<setprecision(2)<<"Fees : "<<fees<<endl;
            cout<<"Duration : "<<duration<<endl;
            cout<<"Location : "<<location<<endl;
            cout<<"-------------------------------------------------------------------------"<<endl;
        }

};
class online{
    public:
        string className;
        double fees;
        string duration;
        string mode;
        string location;

        online(){
            className = "Aakash coaching center";
            fees = 2300;
            duration = "2 hrs";
            mode = "online";
            location = "home";
        }
    public:        void show(){
            cout<<"\n---------------------------------"<<mode<<" mode ------------------------"<<endl;
            cout<<"Mode : "<<mode<<"\n"<<endl;
            cout<<"Coaching name : "<<className<<endl;
            cout<<fixed<<setprecision(2)<<"Fees : "<<fees<<endl;
            cout<<"Duration : "<<duration<<endl;
            cout<<"Location : "<<location<<endl;
            cout<<"-------------------------------------------------------------------------"<<endl;
        }
};


class hybrid : public offline, public online {
    public:
        string Classname;
        double Fees;
        string Duration;
        string Mode;
        string Location;

        hybrid() {
            Classname = offline::className;
            Fees = (offline::fees)/1.5;
            Duration = offline::duration;
            Mode = "hybrid";
            Location = offline::location + " and " + online::location;
        }
        void show(){
            cout<<"\n---------------------------------"<<Mode<<" mode ------------------------"<<endl;
            cout<<"Mode : "<<Mode<<"\n"<<endl;
            cout<<"Coaching name : "<<Classname<<endl;
            cout<<fixed<<setprecision(2)<<"Fees : "<<Fees<<endl;
            cout<<"Duration : "<<Duration<<endl;
            cout<<"Location : "<<Location<<endl;
            cout<<"-------------------------------------------------------------------------"<<endl;
        }
};

int main(){
    string parent;
    cout<<"Enter your parent sir/madam : ";
    getline(cin,parent);

    string student;
    cout<<"Enter the name of student : ";
    getline(cin,student);

    offline off;
    online on;
    hybrid hy;
    
    cout<<"\nHi, sir/madam "<<parent<<"\n for "<<student<<" we, have 3 type of couses you can check the lost below : "<<endl;
    
    
    off.show();
    on.show();
    hy.show();
}