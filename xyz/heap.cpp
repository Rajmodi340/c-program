#include<iostream>
using namespace std;
 class heap{
    int *arr;
    int size;
    int total_size;
    public:
    heap(int n){
    arr=new int(n);
size=0;
total_size=n;}
void insert(int value){
if(size==total_size){
cout<<"heap overflow";
return;
}
arr[size]=value;
int index=size;
size++;
while(index>0&&arr[(index-1)/2]>arr[index]){
    swap(arr[(index-1)/2],arr[index]);
    index=(index-1)/2;
}
cout<<arr[index]<<" ";
cout<<endl<<"";
}
void print(){
    for(int i=0;i<size;i++)
    cout<<arr[i]<<" ";
    cout<<endl<<"";
}
void heapify(int index){
int smallest=index;
int left=2*index+1;
int right=2*index+2;
if(left<size&&arr[left]<arr[smallest])
smallest=left;
if(right<size&&arr[right]<arr[smallest])
smallest=right;
if(smallest!=index){
    swap(arr[index],arr[smallest]);
    heapify(smallest);
}
}
void del(){
    if(size==0){
    cout<<"heap underflow";
    return;}
    cout<<arr[0]<<"";
    arr[0]=arr[size-1];
    size--;
    if(size==0)
    return;
    heapify(0);
}
};
int main(){
    heap h1(6);
     h1.insert(14);
     h1.insert(11);
     h1.insert(4);
     h1.print();
h1.del();
    return 0;
}