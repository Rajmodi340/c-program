#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
  //  int count=1;
    for(int i=1;i<=n;i++){
    
       // char name='a'+i-1;
    //   int count=1;
     for(int j=1;j<=n-i;j++){
   // int count=1; 
   // char a;
     cout<<"";
    // count+=1;
    }
    for(int j=1;j<=n;j++ ){
      cout<<"*";
    }
   // cout<<endl;
     for(int i=n;i>=1;i--){
    
       // char name='a'+i-1;
    //   int count=1;
     for(int j=1;j>=n-i;j++){
   // int count=1; 
   // char a;
     cout<<"";
    // count+=1;
    }
    for(int j=n;j>=1;j-- ){
      cout<<"*";
    }
    cout<<endl;
     }
   // for(int j=i-1;j>=1;j--){
     // cout<<j<<" ";
    
   // int reverse=0;
 /*   while(n>0){
    int lastdigit=n%10;
     n/=10;
    }
    cout<<reverse<<" ";*/
cout<<endl;
    }

    return 0;
}