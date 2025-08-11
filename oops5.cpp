#include<iostream>
using namespace std;
class human{
    private:
    int a;
    protected:
    int b;
    void fun(){
        a=10;
        b=20;
        c=30;
    }
    public:
    int c;
};

int main(){
    human rohit;
    rohit.c=10;
    return 0;
}