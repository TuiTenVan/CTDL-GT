#include<bits/stdc++.h>

using namespace std;

int n, ok;
int a[1000], b[1000];

//void swap(int &a, int &b){
//	int tmp = a;
//	a = b;
//	b = tmp;
//}
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
	else{
		ok = 0;
	}
}
int main(){
	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> b[i];
	}
	sort(b + 1, b + n + 1);
	for(int i = 1; i <= n; i++){
		a[i] = i;
	}
	ok = 1;
	while(ok){
		for(int i = 1; i <= n; i++){
			cout << b[a[i]] << ' ';
		}
		cout << endl;
		sinh();
	}
	return 0;
}
