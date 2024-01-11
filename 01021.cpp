#include<bits/stdc++.h>

using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n, k;
		int a[1000];
		int d[100] = {0};
		cin >> n >> k;
		for(int i = 1; i <= k; i++){
			cin >> a[i];
			d[a[i]] = 1;
		}
		int i = k;
		while(i > 0 && a[i] == n - k + i){
			i--;
		}
		if(i > 0){
			a[i]++;
			for(int j = i + 1; j <= k; j++){
				a[j] = a[i] + j - i;
			}
			int ans = 0;
			for(int j = 1; j <= k; j++){
				d[a[j]] = 0;
			}
			for(int j = 1; j <= 40; j++){
				if(d[j]) ans++;
			}
			cout << ans << endl;
		}
		else{
			cout << k << endl;
		}
	}
	return 0;
}
