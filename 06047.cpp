#include<bits/stdc++.h>

using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		long long a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		sort(a, a + n);
		int ok = 0;
		for(int i = 0; i < n; i++){
			for(int j = i + 1; j < n; j++){
				long long k = a[i] * a[i] + a[j] * a[j];
				long long x = sqrt(k);
				if(x * x == k && binary_search(a + j + 1, a + n, x)){
					cout << "YES\n";
					ok = 1;
					break;
				}
			}
			if(ok) break;
		}
		if(!ok) cout << "NO\n";
	}
	return 0;
}
