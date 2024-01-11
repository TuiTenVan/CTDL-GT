#include<bits/stdc++.h>
using namespace std;

vector<pair<int,int>> a[1000];
const int INF = 1e9;
int n, m, s;
int pre[1000];

void nhap() {
    cin >> n >> m >> s;
    for(int i = 0; i < m; i++) {
        int x, y, w; 
        cin >> x >> y >> w;
        a[x].push_back({y, w});
        //adj[y].push_back({x, w});
    }
}

void dijkstra(int s) {
    vector<long long> d(n + 1, INF);
    d[s] = 0;
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> Q;
    Q.push({0,s});
    pre[s] = s; // đường đi từ s đến s là chính nó

    while(!Q.empty()) {
        pair<int,int> top = Q.top();
        Q.pop();
        int u = top.second;
        int kc = top.first;
        if(kc > d[u]) continue;
        for(auto it : a[u]) {
            int v = it.first;
            int w = it.second;
            if(d[v] > d[u] + w) {
                d[v] = d[u] + w;
                pre[v] = u; // ghi nhận đỉnh trước của đường đi ngắn nhất từ s đến v
                Q.push({d[v], v});
            }
        }
    }

    for(int i = 1; i <= n; i++) {
        cout << d[i] << ' ';
    }
}

int main() {
    int t; 
    cin >> t;
    while(t--) {
        nhap();
        dijkstra(s);

        // in đường đi ngắn nhất từ s đến tất cả các đỉnh khác
        for(int i = 1; i <= n; i++) {
            if(i != s) {
                cout << pre[i] << " ";
            }
        }
        cout << endl;
    }
}

        // xóa các đỉ
