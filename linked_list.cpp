#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node(int value){
data=value;
next=NULL;
    }
};
// create linked list end
Node*createlinkedlist(int arr[],int index,int size,Node*prev){
    if(index==size){
        return prev;
    }
    Node*temp=new Node(arr[index]);
    temp->next=createlinkedlist(arr,index+1,size,temp);
    return temp;
}
void print(Node*head){
    while(head){
        cout<<head->data;
        head=head->next;
    }
}
int main(){
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    Node*dummy=new Node(-1);
    Node*head=createlinkedlist(arr,0,5,dummy);
    print(dummy->next);
    delete(dummy);
    return 0;
}