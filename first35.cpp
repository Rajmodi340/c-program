#include<iostream>
using namespace std;

int main(){
    int arr[5]={30,28,20,16,4};
    int key=28;
    int start=0,end=5,mid;
    int pos=-1;
    while(start<=end)
    {
mid=start+end/2;
if(arr[mid]==key){
  pos=mid;
  break;
}
    
else if(arr[mid]<key)
  end=mid-1;
else
  start=mid+1;
    
    } 
cout<<pos;
    
    return 0;
    
}

