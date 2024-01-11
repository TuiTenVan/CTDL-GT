#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        stack<char> st;
        int ans = 0;
        if(s.size() == 0){
            cout << 1 << endl;
        }
        else{
            for(int i = 0; i < s.size(); i++){
                if(s[i] == '('){
                    st.push(s[i]);
                }
                else if(s[i] == ')' && st.empty()){
                    st.push(s[i]);
                }
                else if(!st.empty() && s[i] == ')' && st.top() == '('){
                    st.pop();
                    ans += 2;
                }
                else if(!st.empty() && s[i] == ')' && st.top() != '('){
                    st.push(s[i]);
                }
            }
            cout << ans << endl;
        }
    }
    return 0;
}