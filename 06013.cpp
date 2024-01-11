#include<bits/stdc++.h>

using namespace std;

void check(int n, int k, int a[]){
	int dem = 0;
	for(int i = 0; i < n; i++){
		if(a[i] == k){
			dem++; 
		}
	}
	if(dem > 0) cout << dem << endl;
	else cout << "-1\n";
}
int main(){
	int t; cin >> t;
	while(t--){
		int x, k;
		cin >> x >> k;
		int a[x];
		for(int i = 0; i < x; i++){
			cin >> a[i];
		}
		check(x, k, a);

	}
	return 0;
}
