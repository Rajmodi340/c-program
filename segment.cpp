#include<iostream>
#include<vector>
#include<string>
using namespace std;
class segment{

    vector<int>tree;
    vector<int> arr;
    int n;

public:
    segment(vector<int>input)
    {
n=input.size();
arr=input;
tree.resize(4*n);
build(0,0,n-1);
    };
    void build(int node ,int start, int end){
        if(start==end){
            tree[node]=arr[start];
            return;
        }
        int mid= start+(end-start)/2;
        build(2*node+1,start,mid);
        build(2*node+2,mid+1,end);
        tree[node]=tree[node*2+1]+tree[node*2+2];
    };
    int range(int node,int start,int end,int left,int right){
        // fully ouside
        if(start>right||left<end){
            return 0;
        }
        // fully inside
        if(start>=left&&end<=right){
            return tree[node];
        }
        // overlapping
        int mid = start + (end - start) / 2;
        return range(2*node+1,start,mid,left,right)+range(2*node+2,mid+1,end,left,right);
    };
    int query(int left,int right){
        return range(0,0,n-1,left,right);
    }
};
int main(){
    vector<int>arr;
    arr.push_back(5);
    arr.push_back(6);
    arr.push_back(7);
    arr.push_back(8);
    arr.push_back(9);
    arr.push_back(10);
    segment*seg=new segment(arr);
    cout<<seg->query(2,5)<<endl;
    return 0;
}