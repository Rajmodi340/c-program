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
class stack{
    public:
    Node*top;
    int size;
    stack(){
        top=NULL;
        size=0;
    }
    void push(int value){
        Node*temp=new Node(value);
        if(temp==NULL){
            cout<<"stack overflow\n";
            return;
        }
        else{
        
        temp->next=top;
        top=temp;
        size++;
        cout<<"pushed"<<value<<"into the stack\n";
    }
    }

    void pop(){
        if(top==NULL){
            cout<<"stack underflow";
            return;
        }
        else{
        Node*temp=top;
        cout<<"popped"<<top->data<<"from the stack\n";
        top=top->next;
        delete temp ;
        size--;
        }
    }
//peek
int peek(){
    if(top==NULL){
        cout<<"stack is empty\n";
        return -1;
    }
    else{
return top->data; 
    }
}
//isempty
bool isempty() {
    return top=NULL;
}
int issize(){
return size;
} 
};

int main(){
    stack s;
    s.push(6);
    s.push(7);
    s.push(8);
    s.pop();
    cout<<s.peek()<<endl;
    cout<<s.issize()<<endl;
}