#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    vector<int>reverse_vec;
        reverse_vec.push_back(1);
        reverse_vec.push_back(2);
        reverse_vec.push_back(4);
        reverse_vec.push_back(3);
        reverse_vec.push_back(5);

    reverse(reverse_vec.begin(), reverse_vec.end());

    // it will return 5 3 4 2 1, reverse of 1 2 4 3 5
    cout<<"Reversed vector : ";
    for (int i = 0; i < reverse_vec.size(); i++){
        cout<<reverse_vec[i]<<" ";
    }
    
}