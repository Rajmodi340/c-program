#include<iostream>
using namespace std;

class customer{
    string name;
    int account_no;
    int balance;
    int*roi;
    public:
    customer()
    //default constructor
    {
name="rohit";
account_no=5;
balance=100;
roi=new int[100];

    }
    //parameterized constructor
   /*customer(string a,int b,int c){
        name=a;
        account_no=b;
        balance=c;*/  
    
    //inline constructor
    inline customer(string a,int b,int c):name(a),account_no(b),balance(c){
}
    void display(){
        cout<<name<<""<<account_no<<""<<balance<<endl;
    }
};
int main(){
//customer a1("raj",10,500);
customer a1;
customer a2("rohit",23,1000);
a1.display();
customer a3(a2);
a3.display();
}

