#include<iostream>
using namespace std;
class customer{
    string name;
    int account_no;
    int salary;
   static int total_customer;
    public:
    customer(string name,int account_no,int salary){
this->name=name;
this->account_no=account_no;
this->salary=salary;
total_customer++;
    }
    static void acceStatic(){
        cout<<total_customer<<endl;
    }
    
void display(){
    cout<<name<<""<<account_no<<""<<salary<<""<<total_customer;
}
void display_total(){
    cout<<total_customer<<endl;
}
};
int customer::total_customer=0;
int main(){
    customer a1("rohit",1,200); 
    customer a2("mohit",2,400);
   //// a1.display();
    a2.display();
    customer::acceStatic();
    a1.display_total();;
    
}