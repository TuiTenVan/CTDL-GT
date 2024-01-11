#include<bits/stdc++.h>

using namespace std;

int maxSubArraySum(int a[], int n){
	int max1 = a[0];
	int curr_max = a[0];
	for(int i = 1; i < n; i++){
		curr_max = max(a[i], curr_max + a[i]);
		max1 = max(curr_max, max1);
	}
	return max1;
}
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int &x : a) cin >> x;
		cout << maxSubArraySum(a, n) << endl;
	}
	return 0;
}
