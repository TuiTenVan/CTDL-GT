#include<bits/stdc++.h>

using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		vector<int> v;
		for(int i = 0; i < n - k + 1; i++){
			int val = a[i];
			for(int j = i; j < k + i; j++){
				if(val < a[j]){
					val = a[j];
				}
			}
			v.push_back(val);
		}
		for(int i = 0; i < v.size(); i++){
			cout << v[i] << ' ';
		}
		cout << endl;
	}
	return 0;
}
