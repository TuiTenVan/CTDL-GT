#include<bits/stdc++.h>

using namespace std;

int n, m, ok;
vector<int> adj[1000];
bool check[1000];

void nhap(){
    cin >> n >> m;
    for(int i = 1; i <= m; i++){
        int x, y; cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    memset(check, false, sizeof(check));
}
void dfs(int u, int k){
    for(auto it : adj[u]){
        if(check[it]){
            continue;
        }
        if(k == n){
            ok = 1;
            return ;
        }
        check[it] = true;
        dfs(it, k + 1);
        check[it] = false;
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        nhap();
        ok = 0;
        for(int i = 1; i <= n; i++){
            dfs(i, 1);
        }
        for(int i = 1; i <= n; i++){
            adj[i].clear();
        }
        if(!ok) cout << "0\n";
        else cout << "1\n";
    }
    return 0;
}