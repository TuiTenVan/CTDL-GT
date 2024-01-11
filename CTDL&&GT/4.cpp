#include<bits/stdc++.h>

using namespace std;

int main(){
	int t; cin >> t;
	for(int i = 1; i <= t; i++){
		cin >> i;
		string n; cin >> n;
		bool x = next_permutation(n.begin(), n.end());
		if(!x){
			cout << i << " BIGGEST\n";
		}
		else{
			cout << i << ' ' << n << endl;
		}
	}
	return 0;
}
