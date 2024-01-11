#include<bits/stdc++.h>

using namespace std; 

int n, m, s, t;
vector<int> adj[1000];
bool check[1000];

void dfs(int s){
	check[s] = true;
	for(auto it : adj[s]){
		if(!check(it)){
			dfs(it);
		}
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> m >> s >> t;
		memset(check, false, sizeof(check));
		for(int i = 1; i <= m; i++){
			int x, y;
			cin >> x >> y;
			adj[x].push_back(y);
		}
	}
	return 0;
}
