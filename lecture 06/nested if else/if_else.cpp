#include <iostream>
#include <string>

using namespace std;

int main (){

    int num_pieces;
    cout<<"Enter the number of cups you want : ";
    cin>>num_pieces;

    double price = 12.21, total_price, GST;

    total_price = price * num_pieces;

    cout<<"total amount you have to pay : "<< total_price<<endl;

    if(total_price >= 2300 && total_price < 5300){

        GST = total_price * 18/100;
        total_price += GST;
        cout<<"your amount is above 2300 INR, now you have to pay 18% GST...";
        cout<<"now your new amount (including GST)"<<total_price<<endl;

    }

    else if(total_price >= 5300){

        GST = total_price * 28/100;
        total_price += GST;
        cout<<"your amount is above 5300 INR, now you have to pay 28% GST...";
        cout<<"now your new amount (including GST)"<<total_price<<endl;

    }

}