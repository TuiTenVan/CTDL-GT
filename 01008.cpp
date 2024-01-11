#include<bits/stdc++.h>

using namespace std;

int n, k, a[1000], ok;

void in(){
	for(int i = 1; i <= n; i++){
		cout << a[i];
	}
	cout << endl;
}
void sinh(){
	int i = n;
	while(i > 0 && a[i] != 0){
		a[i] = 0;
		i--;
	}
	if(i > 0){
		a[i] = 1;
	}
	else{
		ok = 0;
	}
}
bool check(){
	int dem = 0;
	for(int i = 1; i <= n; i++){
		if(a[i] == 1) dem++;
	}
	if(dem == k) return true;
	else return false;
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> k;
		for(int i = 1; i <= n; i++){
			a[i] = 0;
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
