#include<bits/stdc++.h>

using namespace std;

string s;
int ok = 0;

void sinh(){
	int n = s.size() - 1;
	int i = n;
	while(i >= 0 && s[i] != '1'){
		s[i] = '1';
		i--;
	}
	if(i > 0){
		s[i] = '0';
		for(int i = 0; i <= n; i++){
			cout << s[i]; 
		} 
		cout << endl; 
	}
	else{
		for(int j = 0; j < s.size(); j++){
			cout << '1';
		}
		cout << endl;
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> s;
		sinh(); 
	}
	return 0;
}
