#include<bits/stdc++.h>

using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		unordered_map<int, int> mp;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			mp[a[i]]++;
		}
		vector<int> v;
		for(int i = 0; i < n; i++){
			if(mp[a[i]] > 1){
				v.push_back(a[i]);
				break;
			}
		}
		if(v.size() == 0){
			cout << "NO";
		}
		else{
			cout << v[0];
		}
		cout << endl;
	}
	return 0;
}
