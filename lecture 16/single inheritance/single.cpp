#include <iostream>

using namespace std;

class Parent{
    private:
        int load = 0;
    public:
        Parent(int load){
            this->load = load;
        }
    int getload() const{
        return load;
    }
};

class child : private Parent{
    public:
        child(int load) : Parent(load){}
        void displayMessage(){
            cout << "child call " << getload() << endl;
}
};
int main(){
    child c1(10);
        c1.displayMessage();
    
    
}