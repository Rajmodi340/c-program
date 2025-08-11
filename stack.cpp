#include<iostream>
using namespace std;
class stack{
    int *arr;
    int size;
    int top;
public:
bool flag;
stack(int s){
    size=s;
    top=-1;
    arr=new int[s];
}
void push(int value){
    if(top==size-1){
    cout<<("stack is overflow");
    return;
    }
    else
    top++;
    arr[top]=value;
    cout<<"pushed"<<value<<"stack\n";
    flag=0;
}
void pop(){
    if(top==-1){
        cout<<"stack underflow";   
    }  
    else{
    
    cout<<"popped"<<arr[top]<<"from the stack\n";
    top--;}
    if(top==-1)
    flag=1;
}
int peek(){
 if(top==-1){
        cout<<"stack empty\n";
        return -1;
    }
    else
    return arr[top];
}
bool isempty(){
    return top==-1;
}
//size
int issize(){
     return top+1;
}
};

int main(){
    stack s(5);
    
  int value =s.peek();
  if(s.flag==0)
  cout<<value<<endl;
}