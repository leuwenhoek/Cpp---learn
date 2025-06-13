#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    vector<int> num;
        num.push_back(6);
        num.push_back(5);
        num.push_back(3);
        num.push_back(4);
        num.push_back(2);
        num.push_back(1);

    sort(num.begin(), num.end());

    cout<<"sorted array -- ";
    for (int i = 0; i < num.size(); i++){
        cout<<num[i]<<" ";
    }
    
}