#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, m, u;
        cin >> n >> m >> u;
        vector<pair<int,int>> v;
        vector<vector<int>> a(n + 1);
        vector<int> check(n + 1, 0);
        for(int i = 1; i <= m; i++){
            int x, y; cin >> x >> y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
        queue<int> q;
        q.push(u);
        check[u] = 1;
        while(!q.empty()){
            int k = q.front();
            q.pop();
            for(auto it : a[k]){
                if(!check[it]){
                    check[it] = 1;
                    q.push(it);
                    v.push_back({k, it});
                }
            }
        }
        if(v.size() == n - 1){
            for(auto it : v){
                cout << it.first << ' ' << it.second << endl;
            }
        }
        else{
            cout << "-1\n";
        }
    }
    return 0;
}