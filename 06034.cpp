#include<bits/stdc++.h>

using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		long long n, k;
		cin >> n >> k;
		long long a[n];
		long long ans = 0;
		map<long long, long long> mp;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			if(mp.count(k - a[i])){
				ans += mp[k - a[i]];
			}
			mp[a[i]]++;
		}
		cout << ans << endl;
	}
	return 0;
}
