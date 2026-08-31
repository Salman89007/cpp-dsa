#include <iostream>
#include <vector>
using namespace std;

void addEdge(vector<vector<int>> &adj, int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void print(vector<vector<int>> &adj, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << i << ": ";
        for (int neighbour : adj[i])
        {
            cout << neighbour << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n, e;
    cout << "Enter number of nodes: ";
    cin >> n;

    cout << "Enter number of edges: ";
    cin >> e;
    vector<vector<int>> adj(n);
    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;
        addEdge(adj, u, v);
    }

    print(adj, n);

    return 0;
}