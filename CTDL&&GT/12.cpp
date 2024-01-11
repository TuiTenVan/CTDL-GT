#include<bits/stdc++.h>

using namespace std;

int main(){
	int n; cin >> n;
	int a[n];
	vector<int> b, c;
	int i1 = 0, i2 = 0;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		if(i % 2 == 0){
			b.push_back(a[i]);
		}
		else{
			c.push_back(a[i]);
		}
	}
	sort(begin(b), end(b));
	sort(begin(c), end(c), greater<int>());
	for(int i = 0; i < n; i++){
		if(i % 2 == 0){
			cout << b[i1++] << ' ';
		}
		else{
			cout << c[i2++] << ' ';
		}
	}
	return 0;
}
