#include<bits/stdc++.h>

using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int l = 1;
		int a[1000];
		for(int i = 1; i <= n; i++){
			a[i] = i;
			l *= i;
		}
		while(l--){
			prev_permutation(a + 1, a + n + 1);
			for(int i = 1; i <= n; i++){
				cout << a[i] ;
			}
			cout << ' ';
		}
		cout << endl;
	}
	return 0;
}
