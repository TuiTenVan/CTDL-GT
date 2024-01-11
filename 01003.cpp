#include<bits/stdc++.h>

using namespace std;

int n, a[1000];

void swap(int &x,int &y){
	int tmp = x;
	x = y;
	y = tmp;
}
void sinh(){
	int j = n - 1;
	while(j > 0 && a[j] > a[j + 1]){
		j--;
	}
	if(j > 0){
		int k = n;
		while(a[j] > a[k]){
			k--;
		}
		swap(a[j], a[k]);
		int r = j + 1, s = n;
		while(r <= s){
			swap(a[r], a[s]);
			r++;
			s--;
		}
		for(int j = 1; j <= n; j++){
			cout << a[j] << ' ';
		}
		cout << endl;
	}
	else{
		for(int j = 1; j <= n; j++){
			cout << j << ' ';
		}
		cout << endl;
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		for(int i = 1; i <= n; i++){
			cin >> a[i];
		}
		sinh();
	}
	return 0;
}
