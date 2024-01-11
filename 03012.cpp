#include<bits/stdc++.h>

using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		map<char, int> mp;
		for(int i = 0; i < s.size(); i++){
			mp[s[i]]++;
		}
		int max1 = 0;
		for(auto it : mp){
			max1 = max(max1, it.second);
		}
		if(s.size() - max1 >= max1 - 1) cout << '1' << endl;
		else cout << "-1" << endl;
	}
	return 0;
}
