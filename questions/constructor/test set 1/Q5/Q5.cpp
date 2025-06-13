//--------------------------------------------------
//Upar wale Book class me Deep Copy implement kar.
//Dono objects independent hone chahiye.
//--------------------------------------------------

//-----------------------------------------------------------------------------------------------------------------------
// Ek Book class bana jisme ek pointer-based title ho.

//Default constructor "No Title" set kare.
//Shallow Copy Constructor use karke ek object copy karein.
//Dono objects ka title print kar, fir ek ka title change kar aur check kar ki dono change hote hain ya nahi.
//-----------------------------------------------------------------------------------------------------------------------

#include <iostream>
#include <string>

using namespace std;

class Book{
    public:
        string* title;

        Book(){
            title = new string("No title");
        }

        Book(const Book &obj){
            title = new string(*obj.title);
        }

        void show(){
            cout<<"Tile of the Book : "<<*title<<endl;
        }
        ~Book(){
            delete title;
        }
};
int main(){
    Book b1;  //title = no title (default constructor)
    Book b2 = b1; //shallow copy
    b1.show();
    b2.show();

    //changing the value of b2
    cout<<"\nchanging the value of b2.....\n"<<endl;
    *b2.title = "science fiction";

    cout<<"theerfore the tile of b1 will also, get changed..."<<endl;
    b2.show();
    b1.show();    
return 0;
}