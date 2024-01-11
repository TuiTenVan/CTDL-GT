#include<bits/stdc++.h>

using namespace std;

int n, m;
vector<int> adj[1000];
bool visited[1001];

void init(){
	cin >> n >> m;
	for(int i = 0; i < m; i++){
		int x, y; cin >> x >> y;
		adj[x].push_back(y);
//		adj[y].push_back(x);
	}
	memset(visited, false, sizeof(visited));
}
bool dfs(int u, int par){
	visited[u] = true;
	for(int v : adj[u]){
		if(!visited[v]){
			if(dfs(v, u)) return true;
		}
		else if(v != par){
			return true;
		}
	}
	return false;
}
bool check(int n){
	for(int i = 1; i <= n; i++){
		if(!visited[i]){
			if(dfs(i, -1)){
				return true;
			}
		}
	}
	return false;
}
int main(){
	int t; cin >> t;
	while(t--){
		init();
		if(check(n)){
			cout << "YES\n";
		}
		else{
			cout << "NO\n";
		}
		for(int i = 1; i <= n; i++){
			adj[i].clear();
		}
	}
	return 0;
}
