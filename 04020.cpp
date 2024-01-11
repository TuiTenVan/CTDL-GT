#include<bits/stdc++.h>

using namespace std;

int find(int a[], int n, int k){
	int l = 0, r = n - 1;
	while(l <= r){
		int mid = (l + r) / 2;
		if(a[mid] == k){
			return mid;
		}
		else if(a[mid] < k){
			l = mid + 1;
		}
		else{
			r = mid - 1;
		}
	}
	return 0;
}
int main(){
	int t; cin >> t;
	while(t--){
		int n, k; cin >> n >> k;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		if(find(a, n, k) ) cout << find(a, n, k) + 1;
		else cout << "NO";
		cout << endl;
	}
	return 0;
}
