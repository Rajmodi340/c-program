#include<iostream>
#include<fstream>
using namespace std;

int main(){
     ofstream fout;
     fout.open("z1.txt");
     fout<<"hello india";
     fout<<"hello rohit";
     fout<<"hello bhai";
     fout<<"hello raj";
     fout.close();
     ifstream fin;
     fin.open("z1.txt");
     string line;
     while(getline(fin,line)){
        cout<<line;
     }
     fin.close();
    return 0;
}