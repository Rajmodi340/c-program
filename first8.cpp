#include<iostream>
using namespace std;
class cubedemo
{
    public:
    int side;
    cubedemo()
        {
    side=8;
        }
       ~ cubedemo()
        {
   // public:
    //int rollnumber;
   // void setdata ( char name);
   // void getdata(){

      // cout<<"the value of a is"<<a<<endl; 
        //cout<<"the value of b is"<<b<<endl;
cout<<"destuction called"<<endl;

//cout<<"the value of e is"<<e<<endl;
    }
};
//void program :: setdata (char name){
    


int main(){
    cubedemo raj;
    
    cout<<raj.side;
    cout<<"";

   // raj.rollnumber=34;
   // raj.setdata (23);
   // raj.getdata();
    
    return 0;
}