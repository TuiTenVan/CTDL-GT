#include<bits/stdc++.h>

using namespace std;

string s;
int n, a[1000];
vector<vector<int>> res;
vector<string> ans;
vector<int> x;

void Try(int i){
	for(int j = i + 1; j <= n; j++){
		if(a[j] > a[i]){
			x.push_back(a[j]);
			if(x.size() > 1){
				res.push_back(x);
			}
			Try(j);
			x.erase(x.end() - 1);
		}
	}
}
int main(){
	cin >> n;
	a[0] = 0;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	Try(0);
	for(int i = 0; i < res.size(); i++){
		s = "";
		for(int j = 0; j < res[i].size(); j++){
			 s += to_string(res[i][j]) + " ";
		}
		ans.push_back(s);
	}
	sort(ans.begin(), ans.end());
	for(int i = 0; i < ans.size(); i++){
		cout << ans[i] << endl;
	}
	return 0;
}
