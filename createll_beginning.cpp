#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node(int value){
        data=value;
        next=NULL;
    }
};
node*createlinkedlist(int arr[],int index,int size,node*prev){
if(index==size){
return prev;
}
node*temp;
temp=new node(arr[index]);
temp->next=prev;
return createlinkedlist(arr,index+1,size,temp);
}
int main(){
    
    node*head=NULL;
    node*tail=NULL;
    
    //cout<<head->data<<endl;
    //cout<<head->next<<endl;
int arr[]={2,3,4,5,6};
    //insert the node at beginning
    //for(int i=0;i<5;i++){
head=createlinkedlist(arr,0,5,head);
   node*temp=head;
while(temp!=NULL){
    cout<<temp->data;
    temp=temp->next;
}
    
}
