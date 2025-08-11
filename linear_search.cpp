#include<iostream>
using namespace std;
//linear search
/*bool search(int arr[],int x, int index,int n){
    if(index==n)
    return 0;
    if(arr[index]==x)
    return 1;
    return search(arr,x,index+1,n);
}

int main(){ 
    int arr[]={2,4,7,8,6};
    int x=6;
    cout<<search(arr,x,0,5);*/

    //binary search
/*bool search(int arr[],int start,int end,int x){
    if(start>end)
    return 0;
    int mid=start-(end+start/2);
    if(arr[mid]==x)
    return 1;
    else if(arr[mid]<x)
    return search(arr,mid+1,end,x);
    else
    return search(arr,start,mid-1,x);
}
int main(){
    int arr[]={2,3,4,5,6};
    int x=4;
cout<<search(arr,0,4,x);*/

//reverse the array
/*void rev(int arr[],int start,int end){
    if(start>=end)
    return ;
char c=arr[start];
arr[start]=arr[end];
arr[end]=c;
 return rev(arr,start+1,end-1);
}
int main(){
    int arr[]={2,3,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    rev(arr,0,n-1);
    for(int i=0;i<5;i++)
cout<<arr[i]<<"";*/

//rotate an array right by one position 
void rotate(int arr[],int n){
    
    int a=arr[n-1];
    for(int i=n-1;i>0;i--)
    arr[i]=arr[i-1];
    arr[0]=a;
    
}
int main(){
    ;
    int arr[]={3,8,6,9,4};
    int n =sizeof(arr)/sizeof(arr[0]);
    rotate(arr,n);
    for(int i=0;i<n;i++)
    cout<<arr[i]<<"";
    return 0;
}