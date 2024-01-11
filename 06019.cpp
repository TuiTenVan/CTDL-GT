#include<bits/stdc++.h>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b){
	if(a.second == b.second && a.first < b.first){
		return 1;
	}
	if(a.second > b.second){
		return 1;
	}
	return 0;
}
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		vector<pair<int, int>> v;
		map<int, int> mp;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			mp[a[i]]++; 
		}
		for(auto it : mp){
			v.push_back(it);
		}
		sort(begin(v), end(v), cmp);
		for(auto it : v){
			for(int j = 0; j < it.second; j++){
				cout << it.first << ' ';
			}
		}
		cout << endl;
	}
	return 0;
}
