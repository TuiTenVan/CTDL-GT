#include<bits/stdc++.h>

using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		stack<char> st;
		string s; cin >> s;
//		reverse(s.begin(), s.end());
		string res = "";
		int ok = 0;
		for(int i = 0; i < s.size(); i++){
			if(s[i] == '('){
				if(!st.empty()){
					st.push(s[i]);
					s[i] = '0';
					res += s[i];
				}
				else{
					ok = 0;
				}
			}
			else if(s[i] == ')'){
				if(!st.empty() && st.top() == '('){
					st.pop();
					res += '1';
				}
				else{
					ok = 0;
					break;
				}
			}
			else{
				st.push(s[i]);
				res += s[i];
			}
		}
		if(!st.empty()){
			ok = 0;
		}
		if(!ok){
			res += "-1";
		}
		cout << res << endl;
	}
	return 0;
}
