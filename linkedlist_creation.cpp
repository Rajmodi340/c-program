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
    node*tail=NULL;
    
    //cout<<head->data<<endl;
    //cout<<head->next<<endl;
int arr[]={2,3,4,5,6};
    //insert the node at beginning
    //for(int i=0;i<5;i++){
head=createlinkedlist(arr,0,5);
int x=3;
int value=30;
    //insert node at particular position
     node*temp=head;
     x--;
while(x--){
    
    temp=temp->next;
};
node*temp2=new node(value);
temp2->next=temp->next;
temp->next=temp2 ;

   /* if(head==NULL){
    head=new node(arr[i]);
    }
    else{
        node*temp;
        temp=new node(arr[i]);
        temp->next=head;
    head=temp;
    }
}*/

node*temp=head;
while(temp!=NULL){
    cout<<temp->data;
    temp=temp->next;
}

/*insert the value at end
if(head==NULL){

}*/
/*if(head==NULL){
    head=new node(arr[i]);
    tail=head;
}
else{
tail->next=new node(arr[i]);
tail=tail->next;
}

    }
    node*temp=head;
    while(temp){
        cout<<temp->data<<"";
        temp=temp->next;*/
     
};