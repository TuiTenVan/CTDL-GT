#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    for(int i = 1; i <= t; i++){
        int n; string s;
        cin >> n >> s;
        bool found = next_permutation(s.begin(), s.end());
        if(!found){
            cout << n << " BIGGEST\n";
        }
        else{
            cout << n << " " << s << endl;
        }
    }
    return 0;
}