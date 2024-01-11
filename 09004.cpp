#include<bits/stdc++.h>

using namespace std;

bool check[1001];
vector<int> v[1001];
int n, m, u;

void init(){
	cin >> n >> m >> u;
	for(int i = 1; i <= m; i++){
		int x, y; cin >> x >> y;
		v[x].push_back(y);
//		v[y].push_back(x);
	}
	memset(check, false, sizeof(check));
}
void dfs(int u){
	cout << u << " ";
	check[u] = true;
	for(int it : v[u]){
		if(!check[it]){
			dfs(it);
		}
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		init();
		dfs(u);
		cout << endl;
		for(int i = 1; i <= 1000 ; i++){
    		v[i].clear();
		}
	}
	return 0;
}

