#include <iostream>
#include <vector>
#include <queue>
using namespace std;

bool isBipartite(vector<vector<int>> &graph)
{
    int V = graph.size();
    vector<int> color(V, -1);

    for (int i = 0; i < V; i++)
    {
        if (color[i] == -1)
        {
            queue<int> q;
            q.push(i);
            color[i] = 0;

            while (!q.empty())
            {
                int node = q.front();
                q.pop();

                for (int neighbor : graph[node])
                {
                    if (color[neighbor] == -1)
                    {
                        color[neighbor] = 1 - color[node];
                        q.push(neighbor);
                    }
                    else if (color[neighbor] == color[node])
                    {
                        return false;
                    }
                }
            }
        }
    }
    return true;
}

int main()
{
    int V, E;
    cout << "Enter number of vertices & edges: ";
    cin >> V >> E;

    vector<vector<int>> graph(V);

    cout << "Enter edges (u v):\n";
    for (int i = 0; i < E; i++)
    {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    if (isBipartite(graph))
        cout << "Graph is bipartite\n";
    else
        cout << "Graph is NOT bipartite\n";

    return 0;
}
