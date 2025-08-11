#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void printvector(vector<int>v)
    {
        int ans =INT8_MIN;
        for(int i:v){
        if(v[i]>ans){
            ans=v[i];
        }
        }
        cout<<ans<<" ";
    }
    
    int main(){
        vector<int>v={1,2,3,4,5};
        printvector(v);
    
    
    return 0;
}