#include<bits/stdc++.h>

using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		int degree[n + 1] = {};
		for(int i = 0; i < m; i++){
			int x, y; cin >> x >> y;
			degree[x]++;
			degree[y]--;
		}
		int ok = 1;
		for(int i = 1; i <= n; i++){
			if(degree[i] != 0){
				ok = 0;
				cout << "0\n";
				break;
			}
		}
		if(ok){
			cout << "1\n";
		}
	}
	return 0;
}
