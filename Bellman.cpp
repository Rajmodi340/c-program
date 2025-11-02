#include<iostream>
#include<vector>
using namespace std;
vector<int>bellman(int V,vector<vector<int>>&edges,int src){
    vector<int>dist(V,1e8);
    int e=edges.size();
     dist[src]=0;
    for(int i=0;i<V-1;i++){
for(int j=0;j<e;j++){
    int u=edges[j][0];
    int v=edges[j][1];
    int wt=edges[j][2];
    if(dist[u]+wt<dist[v]){
        dist[v]=dist[u]+wt;
    }
}
    }
    for (int j = 0; j < e; j++)
    {
        int u = edges[j][0];
        int v = edges[j][1];
        int wt = edges[j][2];
        if (dist[u] + wt < dist[v])
        {
           vector<int>ans;
           ans.push_back(-1);
           return ans;
        }
    }
    return dist;
}
int main()
{
    int V, E;
    cout << "Enter V & E: ";
    cin >> V >> E;

    vector<vector<int>> edges;

    cout << "Enter u v w:\n";
    for (int i = 0; i < E; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        edges.push_back({u, v, w});
    }

    int src;
    cout << "Enter source: ";
    cin >> src;

    vector<int> ans = bellman(V, edges, src);

    if (ans.size() == 1 && ans[0] == -1)
    {
        cout << "Negative Cycle Found!\n";
        return 0;
    }

    cout << "Shortest distances from " << src << ":\n";
    for (int i = 0; i < V; i++)
    {
        cout << "Node " << i << " -> " << ans[i] << endl;
    }

    return 0;
}