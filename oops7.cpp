#include<iostream>
using namespace std;
//polymorphism
/*class area{
    public:
    int area_calculate(int r){
        return 3.14*r*r;
    }
int area_calculate(int l,int b){
    return l*b;
}
};

int main(){
    area a1,a2;
    cout<<a1.area_calculate(4);
    a2.area_calculate(3,4);
    
    return 0;
}*/
class complex{ 
    int real,img;
    public:
    complex(){

    };
    complex(int real,int img){
        this->real=real;
        this->img=img;
    }
    void display(){
        cout<<real<<" +i"<<img<<endl;
    }
complex operator +(complex &c){
complex ans;
ans.real=real+c.real;
ans.img=img+c.img;
return ans;
}
};
int main(){
     complex c1(3,4);
     complex c2(4,6);
complex c3=c1+c2;
c3.display();
}