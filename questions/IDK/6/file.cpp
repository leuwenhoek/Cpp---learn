#include <iostream>

using namespace std;

int expo(int num, int power){
    int ans = 1;
    for (int i = 0; i < power; i++){
        ans = ans*num;
    }

    return ans;   
}
int main(){
    int num1 = expo(5,3);
    int num2 = expo(7,3);
    int num3 = expo(-12,3);
    cout<<num1<<endl;
    cout<<num2<<endl;
    cout<<num3<<endl;
    cout<<num1+num2+num3<<endl;
}