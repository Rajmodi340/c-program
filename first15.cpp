#include<iostream>
#include<vector>
using namespace std;

int main(){
    int array[]={1,2,1,2,1,2};
   // bool sortedflag=true;

   // vector<int> v(6);
  /* cout<<"size:"<<v.size()<<endl;
    cout<<"capacity:"<<v.capacity()<<endl;
    v.push_back(1);
     cout<<"size:"<<v.size()<<endl;
    cout<<"capacity:"<<v.capacity()<<endl;
    v.push_back(2);
     cout<<"size:"<<v.size()<<endl;
    cout<<"capacity:"<<v.capacity()<<endl;
    v.push_back(3);
    
     cout<<"size:"<<v.size()<<endl;
    cout<<"capacity:"<<v.capacity()<<endl;
    v.resize(5);
     cout<<"size:"<<v.size()<<endl;
    cout<<"capacity:"<<v.capacity()<<endl;
    v.resize(7);
     cout<<"size:"<<v.size()<<endl;
    cout<<"capacity:"<<v.capacity()<<endl;
    v.pop_back();
    v.pop_back();
     cout<<"size:"<<v.size()<<endl;
    cout<<"capacity:"<<v.capacity()<<endl;
   // v.push_back(1);
   //  cout<<"size:"<<v.size()<<endl;
   // cout<<"capacity:"<<v.capacity()<<endl;
    //v.push_back(1);
    for( int i=0;i<5;i++){
        int element;
        cin>>element;
        v.push_back(element);*/
     int anssum=0;
    for(int i=0;i<6;i++){
        //int anssum=0;
        //cin>>v[i];
        if(i%2==0){
            anssum+=array[i];
        }
        else
        {
            anssum-=array[i];
        // sortedflag =false;
        }
    }
    
       /*/ cout<<" enter x:";
       // v.insert(v.begin()+2,6);
        ////for(int element:v){
            //cout<<element;
        int x;
        cin>>x;
           //
           // cout<<endl;
           int occurence=0;
           for(int ele:v){
            if(ele==x){
                occurence++;*/
            
           
                cout<<anssum<<endl;




    
    
    
    
    return 0;
} 
