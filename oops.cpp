#include<iostream>
using namespace std;


    class student{
        private:
int age,roll;
string name;
public:
void setname(string s){
    if(s.size()==0){
return;
    }
name=s;
    }
    void setage(int a){
        age=a;
    }
    void setroll(int r){
        roll=r;
    }
    void getname(){
        cout<<name<<endl;
    }
    void getage(){
        cout<<age<<endl;
    
    }

    };
int main(){
student s1;
s1.setname("raj");
s1.setage(10);
s1.setroll(236);
s1.getname();
s1.getage();

    return 0;
}