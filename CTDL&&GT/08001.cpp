#include<bits/stdc++.h>

using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		queue<int> q;
		while(n--){
			int x; cin >> x;
			if(x == 1){
				cout << q.size() << endl;
			}
			else if(x == 2){
				if(q.size() == 0){
					cout << "NO\n";
				}
				else{
					cout << "YES\n";
				}
			}
			else if(x == 3){
				int k; cin >> k;
				q.push(k);
			}
			else if(x == 4){
				if(!q.empty()){
					q.pop();
				}
			}
			else if(x == 5){
				if(q.size() == 0){
					cout << "-1\n";
				}
				else{
					cout << q.front() << endl;
				}
			}
			else if(x == 6){
				if(q.size() == 0){
					cout << "-1\n";
				}
				else{
					cout << q.back() << endl;
				}
			}
		}
	}
	return 0;
}
