#include<iostream>
using namespace std;
//single inheritance
/*class human{
protected:
string name;
int age;
public:
human(string name,int age){
    this->name=name;
    this->age=age;
}
void work(){
cout<<"i am working\n";
}
};
class student:public human{
    int roll;
    int fees;
    public:
student(string name,int roll,int age,int fees):human(name,age)
 {  //this->name=name;
   // this->age=age;
    this->roll=roll;
    this->fees=fees;
 }
};

int main(){
    student a1("rohit",26,32,99);
    a1.work() ;
    
}*/

//mutilevel inheritance
/*class person{
    protected:
    string name;
    public:
    void introduce(){
        cout<<"hello my name"<<name<<endl;
    }
};
class employes:public person{
protected:
int salary;
public:
void monthly_salary(){
    cout<<"my monthly salary"<<salary<<endl;
}
};
class manager:public employes{
    public:
    string department;
    void my_department(){
cout<<"my department"<<department;
    }

    manager(string name,int salary,string department){
        this->name=name;
        this->salary=salary;
        this->department=department;
    }  
    void work(){
        cout<<"i am leading to department"<<department<<endl;
    }
};
int main(){
    manager a1("rohit",200,"cse");
    a1.work();
    a1. monthly_salary();
    a1.introduce();
    
}*/

//multiple inheritance
/*class engineer{
    public:
    string specialization;
    void work(){
        cout<<"i have specialization in "<<specialization<<endl;
    }
};
class youtuber{
    public:
    int subscriber;
    void contentcreater(){
        cout<<"i have a subcriber base of"<<subscriber<<endl;
    }

};
class codeteacher:public engineer,public youtuber{
public:
string name;

codeteacher(string name,string specialization,int subscriber )
{
    this->name=name;
    this->specialization=specialization;
    this->subscriber=subscriber;
}
void showcase(){
   cout<<"my name is "<<name<<endl; 
   work();
   contentcreater();
}
};
int main(){
    codeteacher a1("rohit","cse",49000);
    a1.showcase();
};*/

//multipath
