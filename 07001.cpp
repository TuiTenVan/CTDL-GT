#include<bits/stdc++.h>

using namespace std;

int main(){
	stack<int> st;
	int n;
	string s;
	int q; cin >> q;
	while(q--){
		cin >> s;
		if(s == "PUSH"){
			cin >> n;
			st.push(n);
		}
		else if(s == "POP"){
			st.pop();
		}
		else if(s == "PRINT"){
			if(st.empty()){
				cout << "NONE\n";
				break;
			}
			int x = st.top();
			cout << x << endl;
		}
	}
	return 0;
}
