#include<bits/stdc++.h>

using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		stack<char> st;
		int cnt = 0;
		for(int i = 0; i < s.size(); i++){
			if(s[i] == ')' && !st.empty()){
				if(st.top() == '('){
					st.pop();
				}
				else{
					st.push(s[i]);
				}
			}
			else{
				st.push(s[i]);
			}
		}
		int k = st.size();
		while(!st.empty() && st.top() == '('){
			st.pop();
			cnt++;
		}
		cout << (k / 2 + cnt % 2) << endl;
	}
	return 0;
}
