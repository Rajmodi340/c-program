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

int main(){
   
   Node*head;
   head=new Node(5);
   int arr[100]={1,2,3,4};
   for(int i=0;i<4;i++){
    if(head==NULL){
head=new Node(arr[i]);}
else{
    Node*temp;
    temp=new Node(arr[i]);
    temp->next=head;
    head=temp;}}
    Node*temp1=head;
    while(temp1!=NULL){
        cout<<temp1->data<<endl;
        temp1=temp1->next;
    }
    return 0;
}