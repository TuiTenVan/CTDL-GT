#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
const int maxn = 100001;
int n, s, a[1000][1000];

vector<pair<int, int>> adj[maxn];
 
void nhap(){
	cin >> n >> s;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cin >> a[i][j];
			if(a[i][j] != 0){
				adj[i].push_back({j, a[i][j]});
//				adj[j].push_back({i, a[i][j]});
			}
		}
	}
}
 
const int INF = 1e9;
int pre[maxn];
 
void dijkstra(int s){
	vector<ll> d(n + 1, INF);
	d[s] = 0;
	priority_queue<pair<int, int>, vector<pair<int, int>> , greater<pair<int,int>>> Q;
	Q.push({0, s});
	pre[s] = s;
	while(!Q.empty()){
		pair<int, int> top = Q.top(); Q.pop();
		int u = top.second;
		int kc = top.first;
		if(kc > d[u]) continue;
		for(auto it : adj[u]){
			int v = it.first;
			int w = it.second;
			if(d[v] > d[u] + w){
				d[v] = d[u] + w;
				Q.push({d[v], v});
				pre[v] = u;
			}
		}
	}
	for(int i = 1;i <= n; i++){
		if(d[i] == INF){
			cout << "K/c " << s << " -> " << i << " = " << "INF;" << endl;
		}
		else{
			cout << "K/c " << s << " -> " << i << " = " << d[i] << ";" << setw(3);	
			int j = pre[i];
			cout << i << " <- ";
			while( j != s){
				cout << j << " <- ";
				j = pre[j];
			}
			cout << s << endl;
		}
	}
}
int main(){
	memset(pre, 0, sizeof(pre));
	memset(a, 0, sizeof(a));
	for(int i = 1; i <= n; i++){
		adj[i].clear();
	}
	nhap();
	dijkstra(s);
}
