#include<bits/stdc++.h>

using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		long long n, m;
		cin >> n >> m;
		long long a[n], b[m];
		long long min1 = 1e9, max1 = -1e9;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			max1 = max(max1, a[i]);
		}
		for(int i = 0; i < m; i++){
			cin >> b[i];
			min1 = min(min1, b[i]);
		}
		long long ans = min1 * max1;
		cout << ans << endl;
	}
	return 0;
}
