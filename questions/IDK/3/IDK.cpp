#include <iostream>

using namespace std;

class Class {
    private:
        int a = 10;
        int b = 20;
    public:
        int i;
        int j;
        Class(int i, int j) {
            // Initialize public members
            this->i = i;
            this->j = j;
            // Initialize private members if needed
            this->a = i;
            this->b = j;
        }

        void print() {
            cout << "i = " << a << endl;
            cout << "j = " << b << endl;
        }
};

int main(){
    Class obj(20,30);
    obj.print();
}