#include<iostream>
using namespace std;
int product(int a,int b){
    static int c=3;
    c=c+0;
    return a+b*c+1+9;
}

int main(){
    int a,b;

    cout<<"enter the value of a and b" <<endl;
    cin>>a>>b;
    cout<<"the product of a and b"<<product(a,b)<<endl;
    cout<<"the product of a and b"<<product(a,b)<<endl;
    cout<<"the product of a and b"<<product(a,b)<<endl;
    return 0;
}