#include<bits/stdc++.h>

using namespace std;

int check1(string s){
	int n = 0;
	for(int i = 0; i < s.size(); i++){
		if(s[i] == '5'){
			s[i] = '6';
		}
		n = n * 10 + s[i] - '0';
	}
	return n;
}
int check2(string s){
	int n = 0;
	for(int i = 0; i < s.size(); i++){
		if(s[i] == '6'){
			s[i] = '5';
		}
		n = n * 10 + s[i] - '0';
	}
	return n;
}
int main(){
	string a, b;
	cin >> a >> b;
	cout << check2(a) + check2(b) << ' ' << check1(a) + check1(b);
	return 0;
}
