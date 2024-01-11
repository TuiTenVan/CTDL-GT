#include<bits/stdc++.h>

using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		int a[n], b[m];
		set<int> se;
		map<int, int> mp;
		for(int i = 0; i < n; i++){
			int x; cin >> x;
			se.insert(x);
			mp[x] = 1;
		}
		for(int i = 0; i < m; i++){
			int x; cin >> x;
			se.insert(x);
			if(mp[x] == 1){
				mp[x]++;
			}
		}
		for(auto it : se) cout << it << ' ';
		cout << endl;
		for(auto it : mp){
			if(it.second > 1) cout << it.first << ' ';
		}
		cout << endl;
	}
	return 0;
}
