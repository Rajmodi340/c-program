#include<iostream>
using namespace std;

int main(){
    int i,j;
    int arr1[3][3]={1,2,3,4,5,6,7,8,9};
   // int arr2[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
int first=0,second=0;
    
    for(int i=0;i<3;i++)
        first+=arr1[i][i];
        i=0,j=2;
        while(j>=0)
        {
            second+=arr1[i][j];
            i++,j--;
        }
        cout<<first<<" "<<second<<" ";

    return 0;
}