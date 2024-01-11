#include<bits/stdc++.h>

using namespace std;

int n, ok;
char s[1000];

void sinh(){
	int i = n;
	while(i > 0 && s[i] != 'A'){
		s[i] = 'A';
		i--;
	}
	if(i > 0){
		s[i] = 'B';
	}
	else{
		ok = 0;
	}
}
void in(){
	for(int i = 1; i <= n; i++){
		cout << s[i];
	}
	cout << ' ';
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		for(int i = 1; i <= n; i++){
			s[i] = 'A';
		}
		ok = 1;
		while(ok){
			in();
			sinh();
		}
		cout << endl;
	}
	return 0;
}
