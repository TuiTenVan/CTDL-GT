#include<bits/stdc++.h>

using namespace std;

int n, ok;
vector<int> a[1000];
bool check[1000];

void nhap(){
    cin >> n;
    for(int i = 0; i < n - 1; i++){
        int x, y; cin >> x >> y;
        a[x].push_back(y);
    }
    memset(check, false, sizeof(check));
    memset(check, 0, sizeof(check));
}
void dfs(int u){
    for(auto it : a[u]){
        if(check[it]){
            ok = 1;
            return;
        }
        check[it] = true;
        dfs(it);
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        nhap();
        ok = 0;
        for(int i = 1; i <= n; i++){
            if(!check[i] && !ok){
                check[i] = true;
                dfs(i);
            }
        }
        if(!ok){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
        for(int i = 1; i <= n; i++){
            a[i].clear();
        }
    }
    return 0;
}