#include<bits/stdc++.h>

using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int k; cin >> k;
		string s; cin >> s;
		int kt_max = 0;
		int d[1000] = {};
		for(int i = 0; i < s.size(); i++){
			d[s[i]]++;
			kt_max = max(kt_max, d[s[i]]);
		}
		if(s.size() >= kt_max * k - (k - 1)) cout << "1\n";
		else cout << "-1\n";
	}
	return 0;
}
