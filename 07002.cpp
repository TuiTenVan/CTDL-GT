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
			if(!st.empty()){
				st.pop();
			}
		}
		else if(s == "PRINT"){
			if(st.empty()){
				cout << "NONE\n";
			}
			else{
				cout << st.top() << endl;
			}
		}
	}
	return 0;
}
