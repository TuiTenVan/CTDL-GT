#include<bits/stdc++.h>

using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		int ans = 1e9;
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		for(int i = 0; i < n; i++){
			for(int j = i + 1; j < n; j++){
				if(abs(a[j] + a[i]) < abs(ans)){
					ans = a[j] + a[i];
				}
			}
		}
		cout << ans << endl;
	}
	return 0;
}
