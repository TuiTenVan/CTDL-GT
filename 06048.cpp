#include<bits/stdc++.h>

using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		long long n; cin >> n;
		long long a[n];
		for(long long &x : a) cin >> x;
		int ans = 0;
		for(int i = 1; i < n; i++){
			if(a[i] < a[i - 1]){
				ans = i;
				break;
			}
		}
		cout << ans << endl;
	}
	return 0;
}
