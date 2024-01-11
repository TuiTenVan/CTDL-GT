#include<bits/stdc++.h>

using namespace std;

int n, m;
bool check[1000];
vector<int> v[1000];

void init(){
	cin >> n >> m;
	for(int i = 1; i <= m; i++){
		int x, y;
		cin >> x >> y;
		v[x].push_back(y);
	//	v[y].push_back(x);
	}
	memset(check, false, sizeof(check));
}
//void dfs(int u){
//	check[u] = true;
//	for(int it : v[u]){
//		if(!check[it]){
//			dfs(it);
//		}
//	}
//}
void bfs(int u){
	queue<int> q;
	q.push(u);
	check[u] = true;
	while(!q.empty()){
		int x = q.front();
		q.pop();
		for(int it : v[x]){
			if(!check[it]){
				q.push(it);
				check[it] = true;
			}
		}
	}
}
void lienthong(){
	int ans = 0;
	for(int i = 1; i <= n; i++){
		if(!check[i]){
			ans++;
			bfs(i);
		}
	}
	if(ans == 1) cout << "YES\n";
	else cout << "NO\n";
}
int main(){
	int t; cin >> t;
	while(t--){
		init();
		lienthong();
		for(int i = 1; i <= 1000; i++){
			v[i].clear();
		}
	}
	return 0;
}
