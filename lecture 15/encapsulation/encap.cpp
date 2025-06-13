#include <iostream>
#include <string>

using namespace std;
class Bankdetails{
    private:
        string accountName;
        double Balance;
    public:
        Bankdetails(){
            accountName = "unknown";
            Balance = 0;
        };

        Bankdetails(string accName, double amount){
            accountName = accName;
            Balance = amount;
        }
        
    //Getting balance
    double getBalance()const{
        return Balance;
    }

    //depositing amount
    void deposit(double amount){
        if(amount>0){
            Balance += amount;
            cout<<"Amount "<<amount<<" has been added....."<<endl;
        }else{
            cout<<"Invalid amount!!"<<endl;
        }
    }

    //withdrawing amount
    void withdraw(double amount){
        if(amount>0 && amount<=Balance){
            Balance -= amount;
            cout<<"Amount "<<amount<<" has been deducted....."<<endl;
        }else{
            cout<<"Invalid amount!!"<<endl;
        }
    }

    //printing amount
    void show(){
        cout<<"Account name = "<<accountName<<endl;
        cout<<"Account balance = "<<Balance<<endl;
    }
    void new_balance(){
        cout<<"New Account balance = "<<Balance<<endl;
    }
};
int main(){
    string accname;
        cout<<"Enter your account name : ";
        cin>>accname;
    double my_balance;
        cout<<"Enter your initial balance : ";
        cin>>my_balance;

    double depo;
    double withd;
    string opt;
    Bankdetails acc1(accname,my_balance);

    do{
        cout<<"\nDo you want to withdraw, deposit in your accont or do you want to exit : ";
        cin>>opt;
        if(opt == "withdraw"){break;}
        else if(opt == "deposit"){break;}
        else if(opt == "exit"){break;}
        else{cout<<"INVALID task.........\nEnter a valid command again :";continue;}
    }while(true);

        if (opt == "withdraw"){
            cout<<"Enter the amount you want to withdraw : ";
            cin>>withd;
        
            cout<<"\n--------Your account has been created----------"<<endl;
            acc1.show();
            acc1.withdraw(withd);
            acc1.new_balance();     

        }
        else if(opt == "deposit"){
            cout<<"Enter the amount you want to deposit : ";
            cin>>depo;
        
            cout<<"\n--------Your account has been created----------"<<endl;
            acc1.show();
            acc1.deposit(depo);   
            acc1.new_balance();     

        }
        else if(opt == "exit"){
            cout<<"thank you for creating your account in this bank ";
        
            cout<<"\n--------Your account has been created----------"<<endl;
            acc1.show(); 

        cout<<"\nExiting.....";
        }

    return 0;
}