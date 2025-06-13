//--------------------------------------------------------------------
// Ek Counter class bana jisme ek static count variable ho.

// Har baar jab naya object banega, count increment hoga.
// Jab destructor chalega, count decrement hoga.
//--------------------------------------------------------------------

#include <iostream>

using namespace std;

class Counter{
    public:
        static int count;
        Counter(){
            cout<<count<<endl;
            count++;
            cout<<count<<endl;
        }
        
        ~Counter(){
            cout<<count<<endl;
            count--;
            cout<<count<<endl;
        }
};
int Counter::count = 0;

int main(){
    Counter* count = new Counter();

    delete count;
}