#include<bits/stdc++.h>

using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		priority_queue<int, vector<int>, greater<int>> q;
		int n; cin >> n;
		for(int i = 0; i < n; i++){
			int x; cin >> x;
			q.push(x);
		}
		long long ans = 0;
		while(q.size() >= 2){
			int min1 = q.top(); q.pop();
			int min2 = q.top(); q.pop();
			int sum = min1 + min2;
			ans += sum;
			q.push(sum);
		}
		cout << ans << endl;
	}
	return 0;
}
