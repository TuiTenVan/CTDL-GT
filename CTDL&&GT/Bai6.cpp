#include<bits/stdc++.h>

using namespace std;

bool tang(string s){
	for(int i = 0; i < s.size() - 1; i++){
		if((s[i]) > (s[i + 1])){
			return false;
		}
	}
	return true;
}
bool giam(string s){
	for(int i = 0; i < s.size() - 1; i++){
		if((s[i]) < (s[i + 1])){
			return false;
		}
	}
	return true;
}
int main(){
	int t; cin >> t;
	while(t--){
		string s;
		cin >> s;
		if(tang(s) == false && giam(s) == false) cout << "NO\n";
		else cout << "YES\n";
	}
	return 0;
}
