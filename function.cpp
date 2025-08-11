#include<iostream>
using namespace std;

/*int cube(int n){
    return n*n*n;
}
int main(){
    int n;
    cin>>n;
    
    cout<<cube(n);*/
    /*int revrese(int n){
        int rev=0;
        while(n!=0){
    int r=n%10;
    rev=rev*10+r;
    n=n/10;
    }
    return rev;
    }
    int main(){
        int n;
        cin>>n;
        cout<<revrese(n);
        return 0;*/
        /*int swap(int &a,int &b,int &c){
            int temp=a;
            a=b;
            b=c;
            c=temp;
        }
        int main(){
            int a,b,c;
            cin>>a>>b>>c;
            swap(a,b,c);
            cout<<a<<" "<<b<<" "<<c;
            return 0;*/
            /*int swap(int &a,int &b){
            a=a+b;
            b=a-b;
            a=a-b;
            }
            int main(){
                int a,b;
                cin>>a>>b;
                swap(a,b);
                cout<<a<<" "<<b<<" ";*/
                int factorial(int n){
                    int fact=1;
                    for(int i=1;i<=n;i++){
                        fact*=i;
                    
                    }
                    return fact;
                }
                  int nCr(int n,int r){
                    return factorial(n)/(factorial(r)*factorial(n-r));
                  }
                  int main(){
                    int n,r;
                    cin>>n>>r;
                    cout<<nCr(n,r);
                    return 0;
                  }
                     
                    
                



                

    


    
