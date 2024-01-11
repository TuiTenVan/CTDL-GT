#include<bits/stdc++.h>

using namespace std;

int n, m;
bool check[1000];
vector<int> v[1000];

void nhap(){
    cin >> n >> m;
    for(int i = 1; i <= m; i++){
        int x, y;
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
}
bool bfs(int n){
    for(int i = 1; i <= n; i++){
        if(!check[i]){
            queue<int> q;
            check[i] = true;
            while(!q.empty()){
                int x = q.front();
                q.pop();
                for(auto it : v[x]){
                    if(!check[it]){
                        check[it] = true;
                        q.push(it);
                    }
                }
            }
        }
    }
    for(int i = 1; i <= n; i++){
        if(!check[i]){
            return false;
        }
    }
    return true;
}
int main(){
    int t; cin >> t;
    while(t--){
        nhap();
        if(bfs(n)){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
        for(int i = 1; i <= n; i++){
            v[i].clear();
        }
    }
    return 0;
}