#include<bits/stdc++.h>

using namespace std;

int n, a[1000], ans,cot[1000], xuoi[1000], nguoc[1000];

void nhap(){
	cin >> n;
	for(int i = 1; i <= n; i++){
		cot[i] = 1;
	}
	for(int i = 1; i < 2 * n; i++){
		xuoi[i] = 1;
		nguoc[i] = 1;
	}
}
void Try(int i){
	for(int j = 1; j <= n; j++){
		if(cot[j] && xuoi[i - j + n] && nguoc[i + j - 1]){
			a[i] = j;
			cot[j] = 0;
			xuoi[i - j + n] = 0;
			nguoc[i + j - 1] = 0;
			if(i == n){
				ans++;
//				return;
			}
			else{
				Try(i + 1);
			}
			cot[j] = 1;
			xuoi[i - j + n] = 1;
			nguoc[i + j - 1] = 1;
		}
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		ans = 0;
		nhap();
		Try(1);
		cout << ans << endl;
	}
	return 0;
}
