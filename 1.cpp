#include<bits/stdc++.h>

using namespace std;

int main(){
	int n; cin >> n;
	int a[n];
	int min_1 = 1e9;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		if(min_1 > a[i]){
			min_1 = a[i];
		}
	}
	int ans = 1;
	for(int i = 0; i < n; i++){
		if(min_1 == a[i]){
			ans++;
		}
	}
	cout << ans << endl;
}
