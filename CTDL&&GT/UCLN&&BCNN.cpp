#include<bits/stdc++.h>

using namespace std;

int UCLN(int a, int b){
	while(a != b){
		if(a > b){
			a -= b;
		}
		else{
			b -= a;
		}
	}
	return a;
}
int BCNN(int a, int b){
	return a / UCLN(a, b) * b;
}
int main(){
	int t; cin >> t;
	while(t--){
		int a, b;
		cin >> a >> b;
		cout << UCLN(a, b) << ' ' << BCNN(a, b);
		cout << endl;
	}
	return 0;
}
