#include <iostream>

using namespace std;

int main(){

    int cube[2][2][2] ={{{2,3},{2,3}},{{2,3},{2,3}}};

    for(int l = 0; l<2; l++){
        for(int m = 0; m<2; m++){
            for(int n = 0; n<2; n++){
                cout<<cube[l][m][n];
            }
            cout<<endl;
        }
            cout<<endl;
    }
}