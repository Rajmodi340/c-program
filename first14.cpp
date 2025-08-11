#include<iostream>
using namespace std;
int main(){
    int array[]={1,2,3,4,};

/*t main(){
    int array[]={3,7,18,9,11};
    int key=8;
    int ans=-1;*/
   // cout<<sizeof(array)<<endl;
   int size=sizeof(array)/sizeof(array[0]);
   // int sum=0;
//har vowels[5];
    
  //  for(char &element:vowels){
      //  cin>>element;
    
        for(int i=0;i<size;i++){
        cout<<array[i]<<endl;
        }
        for(int element:array){
            cout<<element<<endl;
        }
       // sum+=array[i];
      // if(array[i]==key)
        
   // max= array[i];
   //ans=i;
  // break;

    
       // cout<<ans<<endl;
int index=0;
while(index<size){
    cout<<array[index]<<endl;
    index++;
}
    
    return 0;
}
