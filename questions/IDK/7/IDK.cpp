#include <iostream>
using namespace std;

int col_count(int column, int days, int remain, int max_box){
    int temp = 0;
    int temp2;
    for (int i = 1; i <= days; i++){
        if(i == remain){column += 1;}
        if(i == remain+max_box){column += 1; temp2 = days-(remain+max_box);}
        if(i == temp2){column += 1;}
    }
    return column;
}

int days_count(int days, int remain, int max_box){
    int count = days-remain;
    count = count - max_box;
    return count;
}

int main() {
    int i = 0;
    while(i<12){
        cout<<endl;
        cout<<"------------------------------------------------------------------------------------"<<endl;
        int days;
        cout << "Enter the number of days in the month: ";
        cin >> days;

        int column;
        cout << "Enter the column number: ";
        cin >> column;
        int backend_col = column-1;

        if (days <= 0 || column <= 0) {
            cout << "Invalid input!" << endl;
            return 1;
        }

        int remain;
        cout << "Enter the remaining boxes in column " << column << ": ";
        cin >> remain;

        if (remain>16){
            cout << "Invalid input!" << endl;
            return 1;
        }
        int col = col_count(backend_col, days, remain, 16);
        int col2 = days_count(days, remain, 16);
        cout<<"Coulmn number = "<<col<<" Days = "<<col2<<endl;
        cout<<endl;
        i++;
    }
    return 0;
}
