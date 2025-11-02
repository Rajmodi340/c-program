#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> BFS(int V, vector<int> adj[])
{
    queue<int> q;
    vector<bool> visited(V, 0);
    q.push(0);
    visited[0] = 1;
    vector<int> ans;

    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        ans.push_back(node);

        for (int j = 0; j < adj[node].size(); j++)
        {
            if (!visited[adj[node][j]])
            {
                visited[adj[node][j]] = 1;
                q.push(adj[node][j]);
            }
        }
    }
    return ans;
}

int main()
{
    int V, E;
    cin >> V >> E; // number of vertices & edges

    vector<int> adj[V];

    // Input edges
    for (int i = 0; i < E; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u); // Undirected graph (remove for directed)
    }

    vector<int> bfs = BFS(V, adj);

    // Print BFS traversal
    for (int x : bfs)
        cout << x << " ";

    return 0;
}
