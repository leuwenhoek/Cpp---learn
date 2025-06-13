// Ek BankAccount class banao jisme:

// Private members: balance (float), accountHolder (string).
// Constructor: Jo accountHolder aur balance ko initialize kare.
// Friend function showAccountDetails likho jo account holder aur balance ko print kare.
// Ek main function banao jisme multiple accounts (objects) create kar ke unka detail print kar sake.

#include <iostream>

using namespace std;

class BankAccount{
    private:
        float balance;
        string accountHolder;
    public:
        BankAccount(){
            balance = 0;
            accountHolder = "Unknown";
        }
        BankAccount(float bl, string ah){
            balance = bl;
            accountHolder = ah;
        }

        friend int showAccountDetails(const BankAccount &b){
            cout<<"Account holder : "<<b.accountHolder<<endl;
            cout<<"Balance : Rs. "<<b.balance<<endl;
            cout<<endl;
        }
};
int main(){
    BankAccount acc1;
        showAccountDetails(acc1);

    BankAccount acc2(2, "Chat GPT");
        showAccountDetails(acc2);
    
    BankAccount acc3(200000, "Ayush");
        showAccountDetails(acc3);
}