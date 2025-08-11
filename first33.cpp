#include<iostream>
using namespace std;

int main(){
    int arr[100],temp;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=n-2;i>=0;i--){
        bool swapped=0;
    
    for(int j=0;j<=i;j++){
if(arr[j]<arr[j+1])
{
    swapped=1;
temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;
}
    }
    if(swapped==0)
    break;
    }
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}


    


  /*  int arr[5]={1,2,3,45,5};
    int temp;
    int start=0,end=4;
    while(start<end)
    {
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    };
    for (int i=0;i<=4;i++)
    cout<<arr[i];
}*/