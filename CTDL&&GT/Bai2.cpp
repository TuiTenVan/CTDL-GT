#include<bits/stdc++.h>

using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		string s = to_string(n);
		if(s[0] == s[s.size() - 1]) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}
