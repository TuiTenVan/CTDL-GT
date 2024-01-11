#include<bits/stdc++.h>

using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n, m, k;
		cin >> n >> m >> k;
		vector<int> v(n + m);
		for(int i = 0; i < v.size(); i++){
			cin >> v[i];
		}
		sort(begin(v), end(v));
		cout << v[k - 1] << endl;
	}
	return 0;
}
