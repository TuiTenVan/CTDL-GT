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
		int sum1 = 0, sum2 = 0;
		int min1 = min(k, n - k);
		for(int i = 0; i < min1; i++){
			sum1 += a[i];
		}
		for(int i = min1; i < n; i++){
			sum2 += a[i];
		}
		cout << sum2 - sum1 << endl;
	}
	return 0;
}
