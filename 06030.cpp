#include<bits/stdc++.h>

using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		vector<int> a(n);
		stack<vector<int>> st;
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		for(int i = 0; i < n - 1; i++){
			int ok = 0;
			for(int j = 0; j < n - i - 1; j++){
				if(a[j] > a[j + 1]){
					swap(a[j + 1], a[j]);
					ok = 1;
				}
			}
			if(!ok) break;
			st.push(a);
		}
		int b = st.size();
		while(st.size()){
			a = st.top();
			cout << "Buoc " << b-- << ": ";
			for(int j = 0; j < n; j++){
				cout << a[j] << " ";
			}
			cout << endl;
			st.pop();
		}
	}
	return 0;
}
