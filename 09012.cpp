#include<iostream>
#include<vector>

using namespace std;

int n,m, a[1000][1000];
vector<int> v[1000];
bool check[1000];

void init(){
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        int x, y; cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
}
void reinit(){
    for(int i = 1; i <= n; i++){
        check[i] = false;
    }
}
void dfs(int u){
    check[u] = true;
    for(int x : v[u]){
        if(!check[x]){
            dfs(x);
        }
    }
}
void dinhtru(){
    int ans = 0;
    reinit();
    for(int i = 1; i <= n; i++){
        if(!check[i]){
            ans++;
            dfs(i);
        }
    }
    for(int i = 1; i <= n; i++){
        reinit();
        check[i] = true;
        int dem = 0;
        for(int j = 1; j <= n; j++){
            if(!check[j]){
                dem++;
                dfs(j);
            }
        }
        if(dem > ans){
            cout << i << ' ';
        }
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        init();
        dinhtru();
        cout << endl;
        for(int i = 1; i <= 1000; i++){
            v[i].clear();
        }
    }
    return 0;
}