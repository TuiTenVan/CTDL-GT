#include<bits/stdc++.h>

using namespace std;

int n, k, a[1000], ok;

//void xuat(){
//	for(int i = 1; i <= k; i++){
//		cout << a[i] << ' ';
//	}
//}
void sinh(){
	int i = k;
	while(i > 0 && a[i] == n - k + i){
		i--;
	}
	if(i > 0){
		a[i]++;
		for(int j = i + 1; j <= k ; j++){
			a[j] = a[i] + j - i;
		}
		for(int i = 1; i <= k; i++){
			cout << a[i] << ' ';
		}
		cout << endl;
	}
	else{
		for(int i = 1; i <= k; i++){
			cout << i << ' ';
		}
		cout << endl;
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> k;
		for(int i = 1; i <= k; i++){
			cin >> a[i];
		}		
		sinh();
	}
	return 0;
}
