#include<bits/stdc++.h>

using namespace std;

int n, k;
vector<int> a, b;
vector<vector<int>> res;
int ans = 0;

void ans(){
	int sum = 0;
	for(int i = 0; i < n; i++){
		if(a[i] == 1){
			sum += b[i];
		}
	}
	if(sum == k){
//		res.push_back(a);
		ans++;
	}
}
void backTrack(int i){
	for(int j = 0; j <= 1; j++){
		a[i] = j;
		if(i == n - 1){
			ans();
		}
		else{
			backTrack(i + 1);
		}
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> k;
		a.resize(n, 0);
		b.resize(n, 0);
		for(int i = 0; i < n; i++){
			cin >> b[i];
		}
		backTrack(1);
		cout << ans << endl;
	}
	return 0;
}
