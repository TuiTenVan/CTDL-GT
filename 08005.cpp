#include<bits/stdc++.h>

using namespace std;

void check(int n){
	stack<int> st;
	while(n){
		st.push(n % 2);
		n /= 2;
	}
	while(!st.empty()){
		cout << st.top();
		st.pop();
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		for(int i = 1; i <= n; i++){
			check(i);
			cout << " ";
		}
		cout << endl;
	}
	return 0;
}
