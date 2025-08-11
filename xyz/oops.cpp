#include<iostream>
using namespace std;
class customer{
    string name;
    int account;
    int balance;
    public:
    customer(string a,int b,int c){
        this->name=a;
        this->account=b;
        this->balance=c;
    }
    void display(){
        cout<<name<<account<<balance<<endl;
    }
};


int main(){
    customer a1("raj",12,34);
    a1.display();
}