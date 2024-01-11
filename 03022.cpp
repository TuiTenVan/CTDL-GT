#include<bits/stdc++.h>

using namespace std;

int main(){
	int n; cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a, a + n);
	int max2 = a[n - 1] * a[n - 2] * a[n - 3];
	int max3 = a[0] * a[1] * a[n - 1];
	cout << max(max2,max3) << endl;
	return 0;
}
