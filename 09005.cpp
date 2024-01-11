#include<bits/stdc++.h>

using namespace std;

int n, m, u;
vector<int> v[1000];
bool check[1000];

void init(){
	cin >> n >> m >> u;
	for(int i = 1; i <= m; i++){
		int x, y;
		cin >> x >> y;
		v[x].push_back(y);
//		v[y].push_back(x);
	}
	memset(check, false, sizeof(check));
}
void bfs(int u){
	queue<int> q;
	q.push(u);
	check[u] = true;
	while(!q.empty()){
		int x = q.front();
		q.pop();
		cout << x << ' ';
		for(int it : v[x]){
			if(!check[it]){
				q.push(it);
				check[it] = true;
			}
		}
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		init();
		bfs(u);
		cout << endl;
		for(int i = 1; i <= 1000; i++){
			v[i].clear();
		}
	}
	return 0;
}
