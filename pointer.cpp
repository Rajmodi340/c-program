 #include<iostream>
using namespace std;

int main(){
    int arr[5]={1,2,3,4,5};
    int*p=&arr[4];
    for(int i=4;i>=0;i--){
        cout<<*p<<endl;
        p--;
    }
    
    return 0;
}