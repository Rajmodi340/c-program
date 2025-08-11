#include<iostream>
using namespace std;
//print number from 1 toN
/*void print(int num,int N){
    if(num==N){
    cout<<N;
    return;
}
cout<<num;
print(num+1,N);
}
int main(){
    int N;
    cin>>N;
    print(1,N);*/
    
   // by passing one parameter
   /* void print(int num){
    if(num==1){
cout<<1;
return;
    }
print(num-1);
cout<<num;
    }
    int main(){
        int num;
        cin>>num;
print(num);
    
    return 0;
}*/
//print even number
void printeven(int num ,int n){
    if(num>n)
        return;
    
    cout<<num;
    printeven(num+2,n);
}
int main(){
    int n=9;
    printeven(2,9);
    return 0;
}