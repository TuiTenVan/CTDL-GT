#include<bits/stdc++.h>

using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		string s;
		cin >> s;
		stack<char> st;
		int ok = 1;
		for(int i = 0; i < s.size(); i++){
			if(s[i] == '(' || s[i] == '{' || s[i] == '['){
				st.push(s[i]);
			}
			else if(s[i] == ')'){
				if(!st.empty() && st.top() == '('){
					st.pop();
				}
				else{
					ok = 0;
					break;
				}
			}
			else if(s[i] == ']'){
				if(!st.empty() && st.top() == '['){
					st.pop();
				}
				else{
					ok = 0;
					break;
				}
			}
			else if(s[i] == '}'){
				if(!st.empty() && st.top() == '{'){
					st.pop();
				}
				else{
					ok = 0;
					break;
				}
			}
		}
		if(!st.empty()){
			ok = 0;
		}
		if(!ok){
			cout << "NO\n";
		}
		else{
			cout << "YES\n";
		}
	}
	return 0;
}
