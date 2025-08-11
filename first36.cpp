#include<iostream>
using namespace std;

int main(){
    int n,start,end,mid,first=-1,last=-1,target,a[1000];
    cout<<"number of element";
    cin>>n;
    cout<<"element of an array";
    for(int i=0;i<n;i++){
cin>>a[i];

    }
    cout<<"targert element";
    cin>>target;
    start=0,end=n-1;
    while(start<=end){
        mid=start+end/2;
        if(a[mid]==target){
            first=mid;
end=mid-1;
        }
        else if(a[mid]<target)
        start=mid+1;
        else
        end=mid-1;
    }

    
     start=0,end=n-1;
    while(start<=end){
        mid=start+end/2;
        if(a[mid]==target){
            last=mid;
start=mid+1;
        }
        else if(a[mid]<target)
        start=mid+1;
        else
        end=mid-1;
    }
    cout<<first<<last;
    return 0;
}