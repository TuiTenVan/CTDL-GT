#include<bits/stdc++.h>

using namespace std;

int n, k, a[1000], ok = 0;

void sinh(){
	int i = n;
	while(i >= 0 && a[i] != 1){
		a[i] = 1;
		i--;
	}
	if(i > 0){
		a[i] = 1;
//		for(int j = i + 1; j <= n; j++){
//			a[j] = 0;
//		}
	}
	else{
		ok = 0;
	}
}
void xuat(){
	for(int i = 1; i <= n; i++){
		cout << a[i];
	}
	cout << endl;
}
//bool check(){
//	int dem = 0;
//	for(int i = 1; i <= n; i++){
//		if(a[i]){
//			dem++;
//		}
//	}
//	if(dem == k) return true;
//	else return false;
//}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> k;
		for(int i = 1; i <= n; i++){
			a[i] = 1;
		}	
		ok = 1;
		while(ok){
			xuat();
			sinh();
		}	
	//	cout << endl;
	}	
	return 0;
}
