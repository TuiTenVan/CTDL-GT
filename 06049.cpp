#include<bits/stdc++.h>

using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		sort(a, a + n);
		long long ans = 0;
		for(int i = 0; i < n; i++){
			int x = lower_bound(a + i + 1, a + n, k + a[i]) - a;
			ans += x - i - 1;
			cout << x << endl;
		}
	//	cout << ans << endl;
	}
	return 0;
}
