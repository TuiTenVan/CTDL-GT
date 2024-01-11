#include<bits/stdc++.h>

using namespace std;

int n, m, u, socanh = 0, ok;
vector<vector<int>> adj(n + 1);
vector<pair<int, int>> a;
bool check[1000];

void inp(){
    cin >> n >> m >> u;
    for(int i = 1; i <= m; i++){
        int x, y; cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x); // thêm cả hai cạnh vào danh sách
    }
    memset(check, false, sizeof(check));
}

void dfs(int u){
    check[u] = true;
    for(auto it : adj[u]){
        if(!check[it]){
            socanh++;
            a.push_back(make_pair(u, it));
            dfs(it);
        }
    }
}

void xuat(){
    for (int i = 0; i < socanh; i++) {
        cout << a[i].first << ' ' << a[i].second << '\n';
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        inp();
        dfs(u);
        ok = 0;
        for(int i = 1; i <= n; i++){
            if(!check[i]){
                ok = 1;
                break;
            }
        }
        if(ok) cout << "-1\n";
        else{
            xuat();
        }
        for(int i = 1; i <= n; i++){
            adj[i].clear();
        }
        a.clear();
        socanh = 0; // reset lại số cạnh của cây khung
    }
    return 0;
}