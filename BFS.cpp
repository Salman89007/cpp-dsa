#include <iostream>
#include <vector>
#include <queue>
using namespace std;
class Solution
{
public:
    vector<int> bfs(int n, vector<vector<int>> &graph)
    {
        vector<int> dist(n, -1);
        queue<int> q;
        dist[0] = 0;
        q.push(0);
        while (!q.empty())
        {
            int u = q.front();
            q.pop();
            for (int v : graph[u])
            {
                if (dist[v] == -1)
                {
                    dist[v] = dist[u] + 1;
                    q.push(v);
                }
            }
        }
        return dist;
    }
};
int main()
{
    Solution s;
    cout << "Enter number of nodes and edges: ";
    int n, m;
    cin >> n >> m;
    vector<vector<int>> graph(n);
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    vector<int> dist = s.bfs(n, graph);
    for (int d : dist)
    {
        cout << d << " ";
    }
    cout << endl;
    return 0;
}