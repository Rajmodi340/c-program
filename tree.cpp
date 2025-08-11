#include<iostream>
#include<queue>
using namespace std;
class node{
    public:
    int data;
    node*left;
    node*right;
    node(int value){
        data=value;
        left=right=NULL;
    }
};

int main(){
    int x;
    int first;
    int second;
    cin>>x;
    queue<node*>q;
    node*root=new node(x);
    q.push(root);
    while(!q.empty()){
        node*temp=q.front();
        q.pop();
        cout<<"enter the left value"<<temp->data<<"";
        cin>>first;//left node ki value
        if(first!=-1){
        temp->left=new node(first); 
        q.push(temp->left); 
        }
        cout<<"enter the right value of"<<temp->data<<"";
        cin>>second;//right node
        if(second!=-1){
            temp->right=new node(second);
            q.push(temp->right);
        }
    
    }
    
    return 0;
}