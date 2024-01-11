#include<bits/stdc++.h>

using namespace std;

string hoa(string s){
	for(int i = 0; i < s.size(); i++){
		s[i] = toupper(s[i]);
	}
	return s;
}
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
		stringstream ss(s);
		string tmp;
		vector<string> v;
		while(ss >> tmp){
			v.push_back(chuanhoa(tmp));
		}
		for(int i = 1; i < v.size() - 1; i++){
			cout << v[i] << ' ';
		}
		cout << v[v.size() - 1] << ", " << hoa(v[0]);
		cout << endl;
	}
	return 0;
}
