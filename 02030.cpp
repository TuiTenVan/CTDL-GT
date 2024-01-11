#include<bits/stdc++.h>

using namespace std;

char c; int n, k;
int a[1000];

void Try(int i){
	n = c - 'A' + 1;
	for(int j = max(a[i - 1], 1); j <= n; j++){
		a[i] = j;
		if(i == k){
			for(int j = 1; j <= k; j++){
				cout << (char)('A' + a[j] - 1);
			}
			cout << endl;
		}
		else{
			Try(i + 1);
		}
	}
}
int main(){
	cin >> c >> k;
	for(int i = 1; i <= k; i++){
		a[i] = 1;
	}
	Try(1);
	return 0;
}
