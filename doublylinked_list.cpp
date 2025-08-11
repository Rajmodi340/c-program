#include<iostream>
using namespace std;
//insert at beginning
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
int main(){
    /*node*head=NULL;
    if(head=NULL){
        head=new node(5);
    }
    else{
        node*temp=new node(5);
        temp->next=head;
        head->prev=temp;
        head=temp;
    }
    
    node*trav=head;
    while(trav){
        cout<<trav->data<<"";
        trav=trav->next;
    }*/

   //create doubly linked list
    /*node*head=NULL;
    node*tail=NULL; 
    int arr[]={1,2,3,4,5};
    for(int i=0;i<5;i++){
        if(head=NULL){
            head=new node(arr[i]);
tail=head;
        }
else{
    node*temp=new node(arr[i]);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
}
    }*/

   //by using recursion
   node*head=NULL;
   int arr[]={1,2,3,4,5};
   head=createDLL(arr,0,5,NULL);
node*trav=head;
    while(trav){
        cout<<trav->data<<"";
        trav=trav->next;
    }
    
    }

