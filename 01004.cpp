#include<bits/stdc++.h>

using namespace std;

int n,k, a[1005], ok = 1;

void xuat(){
	for(int i = 1; i <= k; i++){
		cout << a[i];
	}
	cout << ' ';
}
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
	else ok = 0;
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> k;
		for(int i = 1; i <= k; i++) a[i] = i;
		ok = 1;
		while(ok){
			xuat();
			sinh();
		}
		cout << endl;
	}
	return 0;
}
