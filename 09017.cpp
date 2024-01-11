#include <iostream>
#include <vector>
#include <stack>

using namespace std;

bool isTree(int n, vector<int> adj[]) {
    vector<bool> visited(n+1, false);
    stack<int> s;
    s.push(1);
    visited[1] = true;
    int edges = 0;
    while(!s.empty()) {
        int node = s.top();
        s.pop();
        for(int i=0; i<adj[node].size(); i++) {
            int neighbor = adj[node][i];
            if(!visited[neighbor]) {
                visited[neighbor] = true;
                s.push(neighbor);
                edges++;
            }
        }
    }
    if(edges != n-1) return false;
    for(int i=1; i<=n; i++) {
        if(!visited[i]) return false;
    }
    return true;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> adj[n+1];
    for(int i=0; i<m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    if(isTree(n, adj)) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    return 0;
}
