#include<bits/stdc++.h>

using namespace std;

int n, k, ok;
int b[1000], a[1000];

void sinh(){
	int i = k;
	while(i > 0 && b[i] == n - k + i){
		i--;
	}
	if(i > 0){
		b[i]++;
		for(int j = i + 1; j <= k; j++){
			b[j] = b[i] + j - i;
		}
	}
	else{
		ok = 0;
	}
}
int main(){
	cin >> n >> k;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
		for(int j = 1; j < i; j++){
			if(a[i] == a[j]){
				n--;
				i--;
			}
		}
	}
	sort(a + 1, a + n + 1);
	for(int i = 1; i <= k; i++){
		b[i] = i;
	}
	ok = 1;
	while(ok){
		for(int i = 1; i <= k; i++){
			cout << a[b[i]] << ' ';
		}
		cout << endl;
		sinh();
	}
	return 0;
}
