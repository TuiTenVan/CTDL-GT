#include<bits/stdc++.h>

using namespace std;

int n, k, a[1000], b[1000];

bool check(){
	for(int i = 1; i <= k; i++){
		if(a[i] != b[i]){
			return false;
		}
	}
	return true;
}
void sinh(){
	int i = k;
	while(i >= 0 && a[i] == n - k + i){
		i--;
	}
	if(i > 0){
		a[i]++;
		for(int j = i + 1; j <= k; j++){
			a[j] = a[i] + j - i;
		}
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		int p = 0;
		cin >> n >> k;
		for(int i = 1; i <= k; i++){
			a[i] = i;
			cin >> b[i];
		}
		while(++p){
			if(check()){
				cout << p << endl;
				break;
			}
			sinh();
		}
	}
	return 0;
}
