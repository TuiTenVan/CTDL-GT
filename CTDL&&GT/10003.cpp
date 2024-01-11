#include<bits/stdc++.h>

using namespace std;

int n, m;
int parent[1000], sz[1000];
vector<pair<int, int>> a;

int find(int v){
    if(v == parent[v]) return v;
    return parent[v] = find(parent[v]);
}
bool Union(int a, int b){
    a = find(a);
    b = find(b);
    if(a != b){
    	parent[b] = a;
    	return false;
	}
	return true;
}
void inp(){
    cin >> n >> m;
    for(int i = 1; i <= m; i++){
        int x, y; cin >> x >> y;
        a.push_back({x, y});
    }
}
bool check(){
	for(int i = 1; i <= n; i++){
        parent[i] = i;
    }
    for(auto x : a){
        int u = x.first;
        int v = x.second;
        if(Union(u,v)){
            return true;
        }
    }
    return false;
}
int main(){
    int t; cin >> t;
    while(t--){
        inp();
        if(check()) cout << "YES\n";
        else cout << "NO\n";
        a.clear();
    }
    return 0;
}