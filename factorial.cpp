#include<iostream>
using namespace std;
/*int fact(int n){
    if(n==1){
    return 1;
    }
    return n*fact(n-1);
}

int main(){
    int n;
    cin>>n;
    cout<<fact(n);*/
   /* int pow(int num,int n){
        if(n==1){
            return num;
        }
        return num*pow(num,n-1);
    }
    int main(){
        int n;
        cin>>n;
    cout<<pow(2,n);*/
    int sqsum(int n){
        if(n==1){
            return 1;
        }
        return n*n+sqsum(n-1);
    }
    int main(){
        int n;
        cin>>n;
        cout<<sqsum(n);
    
    
    return 0;
}