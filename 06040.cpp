#include<bits/stdc++.h>

using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n, m, k;
		cin >> n >> m >> k;
		long long a[n], b[m], c[k];
		for(long long &x : a) cin >> x;
		for(long long &x : b) cin >> x;
		for(long long &x : c) cin >> x;
		int i = 0, j = 0, q = 0;
		vector<long long> v;
		while(i < n && j < m && q < k){
			if(a[i] == b[j] && b[j] == c[q]){
				v.push_back(a[i]);
				i++;
				j++;
				q++;
			}
			else if(c[q] < b[j]){
				q++;
			}
			else if(a[i] < b[j]){
				i++;
			}
			else{
				j++;
			}
		}
		if(v.size() == 0) cout << "-1\n";
		else{
			for(int i = 0; i < v.size(); i++){
				cout << v[i] << ' ';
			}
		}
		cout << endl;
	}
	return 0;
}
