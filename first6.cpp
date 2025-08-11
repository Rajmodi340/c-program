#include<iostream>
using namespace std;

int &swap (int &a, int &b){


 

    int temp=a;
   a=b;
    b=temp;

    return  a;
}
    int main()
    {
    
    int x=5, y=7;
    
    swap ( x,y) = 766;
    cout<<"the value of x is "<<x<<"and the value of y is" <<y<< endl;
    

    return 0;
}












