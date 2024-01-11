#include<bits/stdc++.h>

using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int a[n];
		vector<pair<int, int>> v(n);
		for(int i = 0; i < n; i++){
			cin >> a[i];
			v[i].first = abs(k - a[i]);
			v[i].second = i;
		}
		sort(begin(v), end(v));
		for(int i = 0; i < n; i++){
			cout << a[v[i].second] << ' ';
		}
		cout << endl;
	}
	return 0;
}

