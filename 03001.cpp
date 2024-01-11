#include<bits/stdc++.h>

using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int a[10] = {1,2,5,10,20,50,100,200,500,1000};
		sort(a, a + 10, greater<int>());
		int n; cin >> n;
		int dem = 0;
		for(int i = 0; i < 10; i++){
			dem += n / a[i];
			n %= a[i];
		}
		cout << dem << endl;
	}
	return 0;
}
