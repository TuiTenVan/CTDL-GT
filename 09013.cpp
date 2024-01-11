#include<bits/stdc++.h>

using namespace std;

int n, m, a[1000][1000];
vector<int> v[1000];
bool check[1000];
vector<pair<int, int>> dscanh;
vector<pair<int, int>> b;

void init(){
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        int x, y; cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
        if(x < y){
            dscanh.push_back({x, y});
        }
    }
 //   memset(check, false, sizeof(check));
}
void dfs(int i){
    check[i] = true;
    for(int x : v[i]){
        if(!check[x]){
            dfs(x);
        }
    }
}
// khong xet canh(s, t);
void dfs2(int u, int s, int t){
    check[u] = true;
    for(int x : v[u]){
        if((s == x && u == t) || (s == u && t == x)){
            continue;
        }
        if(!check[x]){
            dfs2(x, s, t);
        }
    }
}
void reinit(){
    for(int i = 1; i <= n; i++){
        check[i] = false;
    }
}
void canhcau(){
    int ans = 0;
   // memset(check, false, sizeof(check));
   reinit();
    for(int i = 1; i <= n; i++){
        if(!check[i]){
            ans++;
            dfs(i);
        }
    }
    for(auto it : dscanh){
        // loai bo canh (x, y) khoi do thi
        int x = it.first, y = it.second;
        reinit();
     //   memset(check, false, sizeof(check));
        int dem = 0;
        for(int j = 1; j <= n; j++){
            if(!check[j]){
                dem++;
                dfs2(j, x, y);
            }
        }
        if(dem > ans){
            b.push_back({x, y});
        }
    }
    sort(b.begin(), b.end());
    for(int i = 0; i < b.size(); i++){
        cout << b[i].first << ' ' << b[i].second << ' ';
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        init();
        canhcau();
        cout << endl;
        for(int i = 1; i <= 1000; i++){
            v[i].clear();
        }
    }
    return 0;
}