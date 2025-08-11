#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
int m,n,array[20][20];
cin>>m,n;
for(int i=0;i<m;i++){
{for(int j=0;j<n;j++)
    cin>>array[i][j];
}
}
   /* vector<vector<int>>matrix(3,vector<int>(4,1));
    for(int i=0;i<3;i++)
    for(int j=0;j<4;j++)
    cout<<matrix[i][j]<<" ";
    cout<<"row="<<matrix.size();
    cout<<endl;
  cout<<"col="<<matrix[0].size();*/
  for(int j=0;j<n;j++)
  {
    if(j%2==0)
    for(int i=0;i<m;i++)
    cout<<array[i][j];
   else
    for(int i=m-1;i>=0;i--)
    cout<<array[i][j];
  }
    return 0;
}