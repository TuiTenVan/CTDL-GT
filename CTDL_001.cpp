#include<bits/stdc++.h>

using namespace std;

int n, a[1000], ok = 1;

void nhap(){
	cin >> n;
	for(int i = 1; i <= n; i++){
		a[i] = 0;
	}
}
void xuat(){
	for(int i = 1; i <= n; i++){
		cout << a[i] << ' ';
	}
	cout << endl;
}
void sinh(){
	int i = n;
	while(i > 0 && a[i] != 0){
		a[i] = 0;
		i--;
	}
	if(i > 0) a[i] = 1;
	else ok = 0;
}
bool check(){
	for(int i = 1; i <= n; i++){
		if(a[i] != a[n - i + 1]) return false;
	}
	return true;
}
int main(){
	nhap();
	while(ok){
		if(check()){
			xuat();
		}
		sinh();
	}
	return 0;
}
