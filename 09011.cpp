#include<bits/stdc++.h>

using namespace std;

int n, m, a[1000][1000];
pair<int, int> path[8] = {{0,1}, {1,0}, {0,-1}, {-1,0}, {1,-1}, {-1, 1}, {-1, -1}, {1, 1}};
bool check[1000][1000];

void dfs(int i, int j){
	check[i][j] = true;
	for(int k = 0; k < 8; k++){
		int i1 = i + path[k].first;
		int j1 = j + path[k].second;
		if(i1 < n && j1 < m && i1 >= 0 && j1 >= 0 && a[i1][j1] && !check[i1][j1]){
			dfs(i1, j1);
		}
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> m;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> a[i][j];
			}
		}
		memset(check, false, sizeof(check));
		int ans = 0;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				if(a[i][j] && !check[i][j]){
					dfs(i, j);
					ans++;
				}
			}
		}
		cout << ans << endl;
	}
	return 0;
}
