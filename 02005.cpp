#include<bits/stdc++.h>

using namespace std;

int ok[1000], a[1000];
string s;

void Try(int j){
	for(int i = 0; i < s.size(); i++){
		if(ok[i]){
			a[j] = i;
			ok[i] = 0;
			if(j == s.size() - 1){
				for(int i = 0; i < s.size(); i++){
					cout << s[a[i]];
				}
				cout << ' ';
			}
			else{
				Try(j + 1);
			}
			ok[i] = 1;
		}
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> s;
		for(int i = 0; i < s.size(); i++){
			ok[i] = 1;
		}
		Try(0);
		cout << endl;
	}
	return 0;
}
