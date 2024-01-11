#include<bits/stdc++.h>

using namespace std;

int main(){
	int n; cin >> n;
	int a[n], f[n + 1], s = 0;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		f[i] = 0;
	}
	for(int i = 0; i < n; i++){
		f[a[i]] = f[a[i] - 1] + 1;
		s = max(s, f[a[i]]);
	}
	cout << n - s;
	return 0;
}
