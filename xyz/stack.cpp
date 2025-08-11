#include<iostream>
using namespace std;
class Node{
public:
Node*next;
int data;
Node( int value){
data=value;
next=NULL;
}
};
class stack{
    
Node*top;
 int size;
 public:
 stack(){
 size=0;
 top=NULL;
 }

void push(int value){
    Node*temp=new Node(value);
    if (temp==NULL){
        cout<<"stack is oveflow\n";
        return ;
    }
    else{
        temp->next=top;
        top=temp;
        size++;
        cout<<value;
    }
}
void pop(){
    if(top==NULL){
        cout<<"stack is underflow\n";
        return;
    }
    else{
        Node*temp=top;
        cout<<top->data;
        top=top->next;
        delete temp;
        size--;
    }
}
int peek(){
    if(top==NULL){
        cout<<"stack is empty\n";
        return -1;
    }
    else{
        return top->data;
    }
}
bool isempty(){
    return top=NULL;
}
int issize(){
    return size;
}

};
int main(){
    stack s;
    s.push(6);
    s.push(62);
    s.push(63);
    s.push(64);
    s.pop();
    cout<<s.issize();
    return 0;
}