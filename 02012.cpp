#include<bits/stdc++.h>

using namespace std;

int C(int k, int n){
	if(k == 0 || k == n) return 1;
	if(k == 1) return n;
	return C(k - 1, n - 1) + C(k, n - 1);
}
int main(){
	int t; cin >> t;
	while(t--){
		int n, m; cin >> n >> m;
		int a[n][m];
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> a[i][j];
			}
		}
		cout << C(n - 1, n + m - 2) << endl;
	}
	return 0;
}
