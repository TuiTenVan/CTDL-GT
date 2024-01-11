#include<bits/stdc++.h>

using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n, m, k;
		cin >> n >> m >> k;
		int a[n], b[m], c[k];
		map<int, int> mp;
		for(int i = 0; i < n; i++){
			int x; cin >> x;
			mp[x]++;
		}
		for(int i = 0; i < m; i++){
			int x; cin >> x;
			if(mp[x] > 0){
				mp[x]++;
			}
		}
		for(int i = 0; i < k; i++){
			int x; cin >> x;
			if(mp[x] > 1){
				mp[x]++;
			}
		}
		int ok = 0;
		for(auto it : mp){
			if(it.second > 2){
				cout << it.first << ' ';
				ok = 1;
			}
		}
		if(!ok) cout << "-1";
		cout << endl;
	}
	return 0;
}
