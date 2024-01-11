#include<bits/stdc++.h>

using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		long long n; cin >> n;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		sort(a, a + n);
		int c = 1e9 + 7;
		long long ans = 0;
		for(int i = 0; i < n; i++){
			ans += (a[i] * i);
			ans %= c;
		}
		cout << ans << endl;
	}
	return 0;
}
