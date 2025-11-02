#include<iostream>
#include<vector>
using namespace std;
vector<int>dijkstra(int V,vector<vector<int>>adj[],int s){
    vector<bool>explored(V,0);
    vector<int>dist(V,INT_MAX);
    dist[s]=0;
    int node=-1;
    int value=INT_MAX;
    for(int i=0;i<V;i++){
        if(!explored[i]&&value>dist[i]){
            node=i;
            value=dist[i];
        }
    }
    // relax the edges
    for(int j=0;j<adj[node].size();j++){
        int neighbour=adj[node][j][0];
        
        int weight=adj[node][j][1];
        if(neighbour>dist[node]+weight)
        neighbour=dist[node]+weight;
    }
    return dist;
}
int main(){
    int V ,e;
    cout<<"enter the value v and c";
    cin>>V>>e;
    vector<vector<pair<int, int>>> adj(V);

    cout << "Enter edges (u v w):\n";
    for (int i = 0; i < e; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w}); // for undirected graph
    }

    int src;
    cout << "Enter source: ";
    cin >> src;

    vector<int> ans = dijkstra(V, adj, src);

    cout << "Shortest distances from " << src << " :\n";
    for (int i = 0; i < V; i++)
    {
        cout << "Node " << i << " -> " << ans[i] << endl;
    }

    
    return 0;
}