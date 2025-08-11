#include<iostream>
#include<vector>
using namespace std;

int main(){
    int vertex,edges;
    cin>>vertex>>edges;
    vector<vector<bool> >Adja(vertex,vector<bool>(vertex,0)) ;
    int u,v;
    for(int i=0;i<edges;i++){
cin>>u>>v;
Adja[u][v]=1;
Adja[v][u]=1;
    }
    for(int i=0;i<vertex;i++){
        for(int j=0;j<vertex;j++)
        cout<<Adja[i][j];
    }
    return 0;
}