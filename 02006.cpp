#include<bits/stdc++.h>

using namespace std;

int n, k, a[100], b[100];
vector<vector<int>> res;

//void tong(){
//	int sum = 0;
//	for(int i = 0; i < n; i++){
//		if(a[i]){
//			sum += a[i];		
//		}
//	}
//	if(sum == k){
//		vector<int> v;
//		for(int i = 0; i < n; i++){
//			if(a[i]){
//				v.push_back(a[i]);
//			}
//		}
//		res.push_back(v);
//	}
//}
void Try(int i){
	for(int j = 0; j <= 1; j++){
		a[i] = j;
		if(i == n){
			int sum = 0;
			for(int l = 1; l <= n; l++){
				if(a[l]){
					sum += b[l];		
				}
			}
			if(sum == k){
				vector<int> v;
				for(int l = 1; l <= n; l++){
					if(a[l]){
						v.push_back(b[l]);
					}
				}
				res.push_back(v);
			}
		}
		else{
			Try(i + 1);
		}
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> k;
		for(int i = 1; i <= n; i++){
			cin >> b[i];
		}		
		sort(b + 1, b + n + 1);
		Try(1);
		if(res.size() == 0) cout << "-1\n";
		else{
			sort(res.begin(), res.end());
			for(int i = 0; i < res.size(); i++){
				cout << "[";
				for(int j = 0; j < res[i].size() - 1; j++){
					cout << res[i][j] << ' ';
				}
				cout << res[i][res[i].size() - 1] << "] ";
			}
		}
		res.clear();
		cout << endl;
	}
	return 0;
}
