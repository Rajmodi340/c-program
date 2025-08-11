#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*left;
    Node*right;
    Node(int value){
        data=value;
        left=right=NULL;
    }
};
void pre_order(Node*root){
    if(root==NULL)
        return;
        cout<<root->data;
        pre_order(root->left);
        pre_order(root->right);
    
};
void in_order(Node*root){
    if(root==NULL)
        return;
        pre_order(root->left);
         cout<<root->data;
        pre_order(root->right);
    
};
void post_order(Node*root){
    if(root==NULL)
        return;
        
        pre_order(root->left);
        pre_order(root->right);
         cout<<root->data;
    
};

Node*binary_tree(){
    int x;
    cin>>x;
    if(x==-1)
    return NULL;
    Node*temp=new Node(x);
    //Left side create
    cout<<"enter the left child";
    temp->left=binary_tree();
    cout<<"enter the right child";
    temp->right=binary_tree();
    return temp;
};


int main(){
    cout<<"enter the root node ";
    Node*root;
    root=binary_tree();
    //pre order
    cout<<"preorder";
    pre_order(root);
    cout<<"\ninorder";
    in_order(root);
    cout<<"\npostorder";
    post_order(root);
}