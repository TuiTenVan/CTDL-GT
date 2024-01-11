#include<bits/stdc++.h>

using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		long long n; cin >> n;
		long long a[n];
		set<long long> se;
		for(long long i = 0; i < n; i++){
			cin >> a[i];
			while(a[i]){
				int r = a[i] % 10;
				se.insert(r);
				a[i] /= 10;
			}
		}
		for(auto it : se){
			cout << it << ' ';
		}
		cout << endl;
	}
	return 0;
}
