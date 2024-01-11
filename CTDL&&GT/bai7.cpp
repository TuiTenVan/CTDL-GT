#include<bits/stdc++.h>

using namespace std;

string chuanhoa(string s){
	s[0] = toupper(s[0]);
	for(int i = 1; i < s.size(); i++){
		s[i] = tolower(s[i]);
	}
	return s;
}
int main(){
	int t; cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
		vector<string> v;
		stringstream ss(s);
		string tmp;
		string res = "";
		while(ss >> tmp){
			res += chuanhoa(tmp) + " ";
		}
		res.pop_back();
		for(int i = 0; i < res.size(); i++){
			cout << res[i];
		}
		cout << endl;
	}
	return 0;
}
