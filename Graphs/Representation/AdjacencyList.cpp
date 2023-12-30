#include <iostream>
#include <vector>

using namespace std;

void addEdge(vector<int> adj[], int u, int v) {
    // we have to add the edge both sides as we are considering it as an undirected graph
    adj[u].push_back(v);
    adj[v].push_back(u);
}

vector<int> getAdjacent(vector<int> adj[], int v) {
    // to get everything that is adjacent to the vertex
    return adj[v];
}

void print(vector<int> adj[], int n) {
    // n -> no of vertices in the graph
    for (int i=0;i<n;i++) {
        cout << i << ": ";
        for (int j=0;j<adj[i].size();j++) {
            cout << adj[i][j] << " ";
        }
        cout << "\n";
    }
}

int main() {
    int v = 4;
    vector<int> adj[v];

    addEdge(adj, 0, 1);
    addEdge(adj, 0, 2);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);

    print(adj, 4);

    return 0;
}