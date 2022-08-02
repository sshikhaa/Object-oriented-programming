#include <iostream>
using namespace std;

class Account{
    private:
    public:
        string name;
        int balance;
    Account();
    Account(string n , int initial=0);
    Account(const Account& source);
        void deposit(int x);
        void withdraw(int x);
};
Account::Account():name{"shivani"},balance{5}{
    cout<<"Default CONSTRUCTOR called when no arguments\n";
};
Account::Account(string n,int initial):
        name{n},balance{initial}{
          cout<<"ACC CONSTRUCTOR CALLED"<<n<<endl;  
        };
        
    //copy CONSTRUCTOR
Account::Account(const Account& source)
            :  name{source.name}, balance{source.balance}{
              cout<<"Copy CONSTRUCTOR called"<<source.name<<endl;  
            };

int main() {
	// your code goes here
	Account a1("shikha" ,500);
	Account a2 = a1;
	Account a3;
	return 0;
}


/*
OUTPUT: 
ACC CONSTRUCTOR CALLEDshikha
Copy CONSTRUCTOR calledshikha
Default CONSTRUCTOR called when no arguments
*/
