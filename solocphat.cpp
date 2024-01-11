#include<bits/stdc++.h>

using namespace std;

int n, a[1000];
int ok = 0;

void sinh(){
	int i = n;
	while(i >= 0 && a[i] != 8){
		a[i] = 8;
		i--;
	}
	if(i >= 0){
		a[i] = 6;
	}
	else{
		ok = 0;
	}
}
bool check(int a[], int n){
	for(int i = 0; i < n; i++){
		if(a[i] != a[n - i - 1]){
			return false;
		}
	}
	return true;
}
void xuat(){
	for(int i = 0; i < n; i++){
		cout << a[i];
	}
	cout << ' ';
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		for(int i = 0; i < n; i++){
			a[i] = 8;
		}
		ok = 1;
		while(ok){
			for(int i = 0; i < n; i++){
				if(check(a, n)){
					xuat();
				}
				sinh();
			}
		}
	}
	return 0;
}
