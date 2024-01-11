#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		pair<int, int> p[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
			p[i].first = a[i];
			p[i].second = i;
		}
		int ans = -1;
		int min1 = a[0].second, val = a[0].first;
		for(int i = 1; i < n; i++){
			if(a[i].first > val){
				ans = max(ans, a[i].second - min1);
			}
			if(min1 > a[i].second){
				min1 = a[i].second;
				k = a[i].first;
			}
		}
		cout << ans << endl;
	}
	return 0;
}