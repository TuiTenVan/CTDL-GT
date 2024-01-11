#include<bits/stdc++.h>

using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		long long n, k; cin >> n >> k;
		long long a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		long long ans = 0;
		sort(a, a + n);
		for(int i = 0; i < n; i++){
			long long x = upper_bound(a + i + 1, a + n, k - a[i]) - a;
			ans += x - i - 1; 
		}
		cout << ans << endl;
	}
	return 0;
}
