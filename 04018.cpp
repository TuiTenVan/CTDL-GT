#include<bits/stdc++.h>

using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		vector<int> v;
		for(int i = 0; i < n; i++){
			if(!a[i]) v.push_back(a[i]);
		}
		cout << v.size() << endl;
	}
	return 0;
}
