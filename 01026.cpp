#include<bits/stdc++.h>

using namespace std;

int n, ok;
int s[1000];

void sinh(){
	int i = n;
	while(i > 0 && s[i] != 6){
		s[i] = 6;
		i--;
	}
	if(i > 0){
		s[i] = 8;
	}
	else{
		ok = 0;
	}
}
void in(){
	for(int i = 1; i <= n; i++){
		cout << s[i];
	}
	cout << endl;
}
bool check(){
	if(s[1] != 8) return false;
	if(s[n] != 6) return false;
	for(int i = 1; i <= n; i++){
		if((s[i] == s[i + 1] && s[i] == 8) || (s[i] == s[i + 1] && s[i + 1] == s[i + 2] && s[i + 2] == s[i + 3]&& s[i] == 6)) return false;
	}
	return true;
}
int main(){
	cin >> n;
	if(n < 6) return 0;
	else{
		for(int i = 1; i <= n; i++){
			s[i] = 6;
		}
		ok = 1;
		while(ok){
			if(check()){
				in();
			}
			sinh();
		}
		cout << endl;
	}
	return 0;
}

