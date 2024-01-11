#include<bits/stdc++.h>

using namespace std;

int n, m, q;
vector<pair<int,int>> adj[1000];
int parent[1000];

bool check[1000];
void nhap(){
	cin >> n >> m >> q;
	memset(check, false, sizeof(check));
	for(int i = 1; i <= m; i++){
		int u, v, w;
		cin >> u >> v >> w;
		adj[u].push_back({v, w});
	}
}
void dfs(int s){
	check[s] = true;
	for(auto it : adj[s]){
		if(!check[it]){
			dfs(it);
		}
	}
}
int lienthong(int s, int t){
	int ans = 0;
	for(int i = s; i <= t; i++){
		if(!check(i)){
			ans++;
			dfs(i);
		}
	}
	return ans;
}
int main(){
	nhap();
	while(q--){
		int s, t;
		cin >> s >> t;
		if(lienthong(s,t) != 0){
			cout << "-1";
		}
	}
	return 0;
}
