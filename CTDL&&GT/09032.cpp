#include<bits/stdc++.h>

using namespace std;

int n, m, res;
vector<int> parent, size;

void makeSet(int n){
    parent.resize(n+1);
    size.resize(n+1);
    for(int i=1; i<=n; i++){
        parent[i] = i;
        size[i] = 1;
    }
}

int findSet(int x){
    if(parent[x] == x) return x;
    return parent[x] = findSet(parent[x]);
}

void unionSet(int x, int y){
    int u = findSet(x);
    int v = findSet(y);
    if(u == v) return;
    if(size[u] > size[v]){
        parent[v] = u;
        size[u] += size[v];
    } else {
        parent[u] = v;
        size[v] += size[u];
    }
}

void nhap(){
    cin >> n >> m;
    makeSet(n);
    for(int i=1; i<=m; i++){
        int u, v;
        cin >> u >> v;
        unionSet(u, v);
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        nhap();
        for(int i=1; i<=n; i++){
            int u = findSet(i);
            res = max(res, size[u]);
        }
        cout << res << endl;
        res = 0;
        parent.clear();
        size.clear();
    }
    return 0;
}
