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

node*createlinkedlist(int arr[],int index,int size){
    if(index==size){
        return NULL;
    }
    node*temp;
    temp=new node(arr[index]);
    temp->next=createlinkedlist(arr,index+1,size);
    return temp;

}
int main(){
node*head=NULL;
int arr[]={2,4,5,6,8};
head=createlinkedlist(arr,0,5);
//delete at begining
//if(head!=NULL){
//node*temp=head;
//head=head->next;
    //delete temp;;

//delete anode at end
if(head!=NULL){
    //only one node
    if(head->next==NULL){
        node*temp=head;
        delete temp;
        head=NULL;
    }
    //more than one node
    else{
        node*current=head;
        node*prev=NULL;
        //current->next is not null
       while(current->next!=NULL){
        prev=current;
        current=current->next;}

        delete current;
        prev->next=NULL;
       } 
    

}
node*temp=head;
while(temp!=NULL){
    cout<<temp->data;
    temp=temp->next;
}
}