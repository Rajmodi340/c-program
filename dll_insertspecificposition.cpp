#include<iostream>
using namespace std;
class node{
    public:
int data;
node*next=NULL;
node*prev=NULL;
node(int value){
data=value;
}
};
node*createDLL(int arr[],int index,int size,node*back){
    if(index==size){
        return NULL;
    }
    node*temp=new node(arr[index]);
    temp->prev=back;
    temp->next=createDLL(arr,index+1,size,temp);
    return temp;
}
//insert at any position
int main(){
    node*head=NULL;
   int arr[]={1,2,3,4,5};
   head=createDLL(arr,0,5,NULL);
    
    node*curr=head;
    int pos=0;
    //insert at start
    if(pos==0){
//linkedlist exist na kre
if(head==NULL){
    head=new node(5);
}
//exist krti
else{
    node*temp=new node(5);
    temp->next=head;
    head->prev=temp;
    head=temp;
}
    }
    else{
node*curr=head;
    //go to the node,after which i have to insert
 while(pos--){
        curr=curr->next;
 };
    //insert at end
    if(curr->next==NULL){
        node*temp=new node(5);
        temp->prev=curr;
        curr->next=temp;
    }
    //insert at middle
    else{
       node*temp=new node(5);
        temp->next=curr->next;
        temp->prev=curr;
        curr->next=temp;
        temp->next->prev=temp;
}
    }
    node*trav=head;
    while(trav){
        cout<<trav->data<<"";
        trav=trav->next;
    }
    
    }