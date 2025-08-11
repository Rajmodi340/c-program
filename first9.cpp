#include<iostream>
using namespace std;

int fib(int n){
    if(n<=1){

    return 1;
    }

return fib(n-2) +fib(n-1);
}
int main(){
int a;
cout<<" enter the number a"<<endl;
cin>>a;
cout<<"the value of fib"<< a<<" is"<<fib(a)<<endl;
    return 0;
}