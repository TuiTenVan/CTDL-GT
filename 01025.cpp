#include<bits/stdc++.h>

using namespace std;

int n, k, ok;
int a[1000];

void sinh(){
	int i = k;
	while(i > 0 && a[i] == n - k + i){
		i--;
	}
	if(i > 0){
		a[i]++;
		for(int j = i + 1; j <= k; j++){
			a[j] = a[i] + j - i;
		}
	}
	else{
		ok = 0;
	}
}
bool check(){
	for(int i = 1; i <= k; i++){
		for(int j = i + 1; j <= k; j++){
			if(a[i] == a[j]) return false;
		}
	}
	return true;
}
void in(){
	for(int i = 1; i <= k; i++){
		cout << (char)(a[i] + 64);
	}
	cout << endl;
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> k;
		for(int i = 1; i <= k; i++){
			a[i] = i;
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
