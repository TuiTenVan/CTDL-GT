#include<bits/stdc++.h>

using namespace std;

int n, a[1000], b[1000];

void sinh(){
	int i = n - 1;
	while(i > 0 && a[i] > a[i + 1]){
		i--;
	}
	if(i > 0){
		int k = n;
		while(a[k] < a[i]){
			k--;
		}
		swap(a[k], a[i]);
		int r = i + 1, s = n;
		while(r <= s){
			swap(a[r], a[s]);
			r++;
			s--;
		}
	}
}
bool check(){
	for(int i = 1; i <= n; i++){
		if(a[i] != b[i]) return false;
	}
	return true;
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		int cnt = 1;
		for(int i = 1; i <= n; i++){
			cin >> b[i];
			a[i] = i;
		}
		while(cnt++){
			if(check()){
				cout << cnt - 1<< endl;
				break;
			}
			sinh();
		}
	}
	return 0;
}
