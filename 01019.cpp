#include<bits/stdc++.h>

using namespace std;

int n, ok;
char a[100];

void in(){
	for(int i = 1; i <= n; i++){
		cout << a[i];
	}
	cout << endl;
}
void sinh(){
	int i = n;
	while(i > 0 && a[i] != 'A'){
		a[i] = 'A';
		i--;
	}
	if(i > 0){
		a[i] = 'H';
	}
	else{
		ok = 0;
	}
}
bool check(){
	if(a[1] == 'A') return false;
	if(a[n] == 'H') return false;
	for(int i = 1; i <= n; i++){
		if(a[i] == a[i + 1] && a[i] == 'H') return false;
	}
	return true;
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		for(int i = 1; i <= n; i++){
			a[i] = 'A';
		}
		ok = 1;
		while(ok){
			if(check()){
				in();
			}
			sinh();
		}
	}
	return 0;
}
