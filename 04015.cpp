#include<bits/stdc++.h>

using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n, k; cin >> n >> k;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		sort(a, a + n);
		int m = upper_bound(a, a + n, k) - a;
		if(m > 0){
			cout << m << endl;
		}
		else{
			cout << "-1\n";
		}
	}
	return 0;
}
