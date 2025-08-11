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
// insert at the beginning;
Node*createlinklist(int arr[],int index,int size,Node*prev){
    if(index==size)
return prev;
Node*temp;
temp=new Node(arr[index]);
temp->next=prev;
return createlinklist(arr,index+1,size,temp);
}
int main(){
    Node*head;
    head=NULL;
    int arr[]={2,3,4,5,6};
    head=createlinklist(arr,0,5,head);
    Node*temp=head;
    while(temp){
        cout<<temp->data<<"";
        temp=temp->next;
    }
    return 0;
}