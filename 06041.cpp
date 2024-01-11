#include<bits/stdc++.h>

using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		map<int , int> mp;
		int max1 = 0;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			mp[a[i]]++;
			max1 = max(max1, mp[a[i]]);
		}
		int ok = 0;
		for(auto it : mp){
			if(it.second == max1 && it.second > n / 2){
				cout << it.first << endl;
				ok = 1;
			}
		}
		if(!ok) cout << "NO\n";
	}
	return 0;
}
