#include<iostream>
#include<stack>//internal implementation by using dequeue
using namespace std;

int main(){
    stack<int>s;
    s.push(6);
    s.push(7);
    s.push(28);
    cout<<s.size()<<endl; 
    cout<<s.top()<<endl;
    cout<<s.empty()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    return 0;
}