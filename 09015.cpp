#include<bits/stdc++.h>

using namespace std;

int n, m;
vector<int> adj[1000];
int color[1001];

void init(){
	cin >> n >> m;
	for(int i = 0; i < m; i++){
		int x, y; cin >> x >> y;
		adj[x].push_back(y);
	}
	memset(color, 0, sizeof(color));
}
bool dfs(int u){
	color[u] = 1; //mau xam;
	for(int v : adj[u]){
		if(color[v] == 0){
			if(dfs(v)) return true;
		}
		else if(color[v] == 1){
			return true;
		}
	}
	color[u] = 2; //mau den
	return false;
}
bool check(int n){
	for(int i = 1; i <= n; i++){
		if(color[i] == 0){
			if(dfs(i)){
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
