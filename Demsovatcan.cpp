#include<bits/stdc++.h>

using namespace std;

int n, m;
char  a[105][105];
pair<int, int> path[8] = {{0,1}, {1,0}, {0,-1}, {-1,0}};

void dfs(int i, int j){
	for(int k = 0; k < 4; k++){
		int i1 = i + path[k].first;
		int j1 = j + path[k].second;
		if(i1 < n && j1 < m && i1 >= 0 && j1 >= 0 && a[i1][j1] == '#'){
			a[i1][j1] = '.';
			dfs(i1, j1);
		} 
	}
}

int main(){
	cin >> n >> m;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> a[i][j];
		}
	}
	int ans = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(a[i][j] == '#'){
				a[i][j] = '.';
				dfs(i, j);
				ans++;
			}
		}
	}
	cout << ans;
	return 0;
}

