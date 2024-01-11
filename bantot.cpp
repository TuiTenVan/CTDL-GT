#include<bits/stdc++.h>

using namespace std;

int main(){
	int n, k; 
	cin >> n >> k;
	int ans = 0;
	vector<string> s(n + 1);
	vector< vector<int> > f(n + 1, vector<int> (30, 0));
	for(int i = 1; i <= n; i++){
		cin >> s[i];
		f[i] = f[i - 1];
		f[i][s[i].size()]++;
	}
	for(int i = 1; i <= n; i++){
		ans += f[i-1][s[i].size()] - f[max(i - k - 1, 0)][s[i].size()];
	}
	cout << ans << endl;
	return 0;
}
