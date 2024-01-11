#include<bits/stdc++.h>

using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		int a[n][m];
		vector<int> v[n + 1];
		for(int i = 1; i <= m; i++){
			int x, y; cin >> x >> y;
			v[x].push_back(y);
		}
		for(int i = 1; i <= n; i++){
			cout << i << ": ";
			for(auto it : v[i]){
				cout << it << ' ';
			}
			cout << endl;
		}
		cout << endl;
	}
	return 0;
}
