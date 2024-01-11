#include<bits/stdc++.h>

using namespace std;

int main(){
	int n; cin >> n;
	pair<int, int> a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i].first >> a[i].second;
	}
	sort(a, a + n);
	int ans = a[0].second, min1 = a[0].first;
	for(int i = 1; i < n; i++){
		if(a[i].first == min1){
			ans = max(a[0].second, a[i].second);
		}
		else{
			ans += a[i].second;
		}
	}
	cout << ans << endl;
	return 0;
}
