#include<iostream>
#include<exception>
using namespace std;
class customer{
    string name;
    int balance,account_number;
    public:
customer(string name,int balance,int account_number)
    {
        this->name=name;
        this->balance=balance;
        this->account_number=account_number;
    }
    void deposit(int amount){
        if(amount>0){
            balance+=amount;
            throw "amount  credited successfully";
        }else{
throw "invalid argument";
        }
    }
void withdraw(int amount){
    if(amount>0&&amount<=balance){
        balance-=amount;
        cout<<amount<<" rs is debited successfully";
    }
    else if(amount<0){
throw"amount should be greater than 0\n ";
    }
    else
    {
        throw"your balance is low\n";
    }
}
};
int main(){
    customer c1("rohit",5000,10);
    c1.deposit(100);
    c1.withdraw(6000);
    c1.deposit(100);
}
catch(const exception *e){
  cout<<"exception occur:"<<e.what()<<endl;  

}