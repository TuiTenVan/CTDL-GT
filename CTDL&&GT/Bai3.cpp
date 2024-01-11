#include<bits/stdc++.h>

using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		int ok = 0;
		for(int i = 0; i <= n / 2; i++){
			if(a[i] != a[n - i - 1]){
				cout << "NO\n";
				ok = 1;
				break;
			}
		}
		if(!ok) cout << "YES\n";
	}
	return 0;
}
