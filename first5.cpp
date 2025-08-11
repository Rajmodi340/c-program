#include<iostream>
using namespace std;

int main(){
    //int i=7;
   // while(i<8)

    //cout<<"the digit of i:"<<i<<endl;
   // i++;
int a[4][2]={{0,0},
{1,2},
{2,4},
{3,6}};




for(int i=0;i<5;i++)
{
    for(int j=0;j<=2;j++)
{
    cout<<"a["<<i<<"]["<<j<<"]:";
    cout<<a[i][j]<<endl;
}
}

    
    return 0;
}
