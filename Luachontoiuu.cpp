#include<bits/stdc++.h>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b){
	return a.second < b.second;
}
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		pair<int, int> a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i].first >> a[i].second;
		}
		int ans = 1;
		sort(a, a + n, cmp);
		int min1 = a[0].second, x= a[0].first;
		for(int i = 1; i < n; i++){
			if(min1 <= a[i].first){
				min1 = a[i].second;
				ans++; 
			}
		}
		cout << ans << endl;
	}
	return 0;
}
