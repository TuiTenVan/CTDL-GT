#include<bits/stdc++.h>

using namespace std;

int main(){
	string s;
	getline(cin, s);
	if(s[0] + s[4] - s[8] - 48 == 0){
		cout << "YES\n";
	}
	else{
		cout << "NO\n";
	}
	return 0;
}
