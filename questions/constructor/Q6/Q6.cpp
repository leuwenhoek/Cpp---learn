//--------------------------------------------------------------------------------
// Basic Copy Constructor
// Book class banao jisme title aur author ho.
// Ek parameterized constructor likho jo values set kare.
// Ek copy constructor likho jo ek object se values copy kare.
// Ek Book ka object banao aur dusra object pehle wale ko copy karke banao.
// Dono objects ka title aur author print karo
//--------------------------------------------------------------------------------

#include <iostream>

using namespace std;

class Book{
    public:
        string title;
        string author;

        Book(){
            title = "not define";
            author = "unknown";
        }
        Book(string title_ , string author_){
            title = title_;
            author = author_;
        }

        Book(const Book &b) {
            title = b.title;
            author = b.author;
        }

        void print(){
            cout<<"Title of the book : "<<title<<endl;
            cout<<"Author of the book : "<<author<<endl;
        }
};
int main(){
    Book b1("Rich dad poor dad","Robert Kiyosaki");
        b1.print();

    Book b2(b1);
        b1.print();
}