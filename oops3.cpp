#include<iostream>
using namespace std;
class customer{
    string name;
    int*data;
    public:
    customer(string  name){
        this->name=name;
        cout<<name<<endl;
    }

    /*customer()
    {
        name="rohit";
        data=new int;
        *data=10;
        cout<<"constructor is called\n";
    }
    //destructor
    ~customer()
    {
        delete data;
cout<<"destructor is called\n";
    }
};*/
~customer()
{
    cout<<name<<endl; 
}
};
int main(){
    customer a1("1"),a2("2"),a3("3");
customer*a4=new customer;
}