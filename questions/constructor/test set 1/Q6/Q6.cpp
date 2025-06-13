//--------------------------------------------------------------------------------
// Ek File class bana jisme ek string fileName ho.

// Destructor "File Closed" print kare.
// Ek object bana aur uska scope khatam hone de taaki destructor trigger ho.
//--------------------------------------------------------------------------------

#include <iostream>
#include <string>

using namespace std;

class File{
    public:
        string filename;
        string created_on;
        string file_type;
        int size;

        File(){
            filename = "File";
            created_on = "16/02/2025";
            file_type = "exe";
            size = 0;                            //In bytes
        }

        File(string fname, string created, string type, int size_){
            filename = fname;
            created = created_on;
            file_type = type;
            size = size_;
        }

        void properties(){
            cout<<"\naccessing the properties of the file...\n"<<endl;
            cout<<"opening the file..."<<endl;
            cout<<endl;                            //i can use '\n' instead of 'cout<<endl', but this makes the code more readable. 

            cout<<"----------poperties menu------------"<<endl;
            cout<<endl;

            cout<<"File name : "<<filename<<endl;
            cout<<"Date of creation : "<<created_on<<endl;
            cout<<"File type : "<<file_type<<endl;
            cout<<"Size of file : "<<size<<endl;
            cout<<endl;

            cout<<"----------closing the file------------"<<endl;
            cout<<endl;
        }

        ~File(){
            cout<<"\tFile closed"<<endl;
        }

};

int main(){
    File f1("My File 1","08/09/2010","ZIP",1024);
    f1.properties();
return 0;
}