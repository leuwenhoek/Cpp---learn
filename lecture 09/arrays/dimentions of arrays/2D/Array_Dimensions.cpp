#include <iostream>

using namespace std;

int main() {

    int matrix[2][3] = {{2,1,3},{3,1,2}};

    for(int i = 0; i<2 ;i++){

        for (int l = 0; l<3; l++){            
            cout<<matrix[i][l];
        }
        cout<<endl;
    }
}