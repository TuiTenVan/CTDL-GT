#include<bits/stdc++.h>

using namespace std;

int n, k, a[100], b[100];

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
}
bool check(){
	for(int i = 1; i <= k; i++){
		if(a[i] != b[i]) return false;
	}
	return true;
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> k;
		int cnt = 0;
		for(int i = 1; i <= k; i++){
			cin >> b[i];
			a[i] = i;
		}
		while(++cnt){
			if(check()){
				cout << cnt << endl;
				break;
			}
			sinh();
		}
	}
	return 0;
}
