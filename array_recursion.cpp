#include<iostream>
using namespace std;
   /*void print(int arr[],int index){
        if(index==-1){
            return;
        }
        cout<<arr[index];
        print(arr,index-1);
    }
    int main(){
       int arr[]={6,4,9,7,3};
    print(arr,4);*/
    //find maximum element
    /*int maxele(int arr[],int index,int n){
        if(index==n-1)
            return arr[index];
        return max(arr[index],maxele(arr,index+1,n));

    }
    int main(){
        int arr[]={7,2,4,1,6};
    cout<<maxele(arr,0,5);*/
    //to find product of element
   /*int product(int arr[],int index,int n){

    if(index==n)
    return 1;
    return arr[index]*product(arr,index+1,n);
   }
   int main(){
int arr[]={1,2,3,4,5};
cout<<product(arr,0,5);*/

//to find even element
int even(int arr[],int index, int n){
    if(index==n)
return 1;
if(arr[index]%2!=0) 
return 0;
return even(arr,index+1,n);
}
int main(){
int arr[]={2,8,10,4,6};
cout<<even(arr,0,5);
return 0;
}