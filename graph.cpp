#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int vertex, edges;
    cout << "Enter number of vertices and edges: ";
    cin >> vertex >> edges;

    vector<vector<int>> Adjmat(vertex, vector<int>(vertex, 0));

    int u, v;
    for (int i = 0; i < edges; i++)
    {
        cout << "Enter edge (u v): ";
        cin >> u >> v;

        Adjmat[u][v] = 1;
        // Adjmat[v][u] = 1; // because undirected graph
    }

    cout << "\nAdjacency Matrix:\n";
    for (int i = 0; i < vertex; i++)
    {
        for (int j = 0; j < vertex; j++)
        {
            cout << Adjmat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
