#include<bits/stdc++.h>

using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int &x : a) cin >> x;
		int m; cin >> m;
		int b[m];
		for(int &x : b) cin >> x;
	
		int i = 0, j = 0, k = l;
		while(i < n && j < m){
			if(a[i] < b[j]){
				cout << a[i] << ' ';
				i++;
			}
			else{
				cout << b[j] << ' ';
				j++;
			}
		}
		while(i < n){
			cout << a[i] << ' ';
			i++;
		}
		while(j < m){
			cout << b[j] << ' ';
			j++;
		}
		cout << endl;
	}
	return 0;
}
