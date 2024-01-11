#include<bits/stdc++.h>

using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n], b[n];
		stack<int> st;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			b[i] = -1;
		}
		for(int i = 0; i < n; i++){
			while(!st.empty() && a[st.top()] < a[i]){
				b[st.top()] = a[i];
				st.pop();
			}
			st.push(i);
		}
		for(int i = 0; i < n; i++){
			cout << b[i] << ' ';
		}
		cout << endl;
	}
	return 0;
}
