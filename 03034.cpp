#include<bits/stdc++.h>

using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n,m,k; cin >> n >> m >> k;
		int a[n], b[m], c[k];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		for(int i = 0; i < m; i++){
			cin >> b[i];
		}
		for(int i = 0; i < k; i++){
			cin >> c[i];
		}
		vector<long long> v;
		int i = 0, j = 0, q = 0;
		while(i < n && j < m && q < k){
			if(a[i] == b[j] && b[j] == c[q]){
				v.push_back(a[i]);
				i++;
				j++;
				q++;
			}
			else if(a[i] < b[j]){
				i++;
			}
			else if(b[j] < c[q]){
				j++;
			}
			else{
				q++;
			}
		}
		if(v.size() == 0) cout << "NO";
		else{
			for(int i = 0; i < v.size(); i++){
				cout << v[i] << ' ';
			}
		}
		cout << endl;
	}
	return 0;
}
