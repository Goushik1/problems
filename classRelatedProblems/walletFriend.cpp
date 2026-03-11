#include <iostream>
using namespace std;

class WalletAuditor;

class Wallet{
private:
    double balance;
public:
    Wallet(double b=0){ balance=b; }
    void deposit(double a){
        if(a<=0) throw "invalid";
        balance+=a;
    }
    void withdraw(double a){
        if(a<=0 || a>balance) throw "invalid";
        balance-=a;
    }
    friend class WalletAuditor;
};

class WalletAuditor{
public:
    void report(const Wallet& w){
        cout<<w.balance<<endl;
    }
};

class Third{
public:
    void test(const Wallet& w){
        cout<<"cannot access wallet balance"<<endl;
    }
};

int main(){
    Wallet w(100);
    w.deposit(50);
    w.withdraw(20);
    WalletAuditor a;
    a.report(w);
    Third t;
    t.test(w);
}