#include<bits/stdc++.h>

using namespace std;

string tt = "+-*/";

bool check(char c){
    for(int i = 0; i < tt.size(); i++){
        if(tt[i] == c){
            return true;
        }
    }
    return false;
}
int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        stack<int> st;
        for(int i = s.size() - 1; i >= 0; i--){
            if(isdigit(s[i])){
                st.push(s[i] - '0');
            }
            else if(check(s[i])){
                int x = st.top();
                st.pop();
                int y = st.top();
                st.pop();
                int sum = 0;
                if(s[i] == '+'){
                    sum = x + y;
                }
                else if(s[i] == '-'){
                    sum = x - y;
                }
                else if(s[i] == '*'){
                    sum = x * y;
                }
                else if(s[i] == '/'){
                    sum = x / y;
                }
                st.push(sum);
            }
        }
        cout << st.top() << endl;
    }
    return 0;
}