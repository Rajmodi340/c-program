#include<iostream>
using namespace std;

int main(){
    int arr[1000];
    int n;
   //
   //
   // int n,i,j;
    cout<<"enter the size of array";
   cin>>n;
   // cout<<"enter the element in array";
    for(int i=0; i<n;i++)
cin>>arr[i];
for(int i=1;i<n;i++)
    {
    
       // int index=i;
        for(int j=n;j>0;j--)
        {
if(arr[j]<arr[j-1])

    swap (arr[j],arr[j-1]);
    else break;

        }
    }
    for(int i=0;i<n;i++)

    
      cout<<arr[i]<<" ";  
    }
