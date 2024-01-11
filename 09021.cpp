#include<bits/stdc++.h>

using namespace std;

int n; 
int a[1001][1001];
vector<int> v[1001];

int main(){
	cin >> n;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cin >> a[i][j];
			if(a[i][j]){
				v[i].push_back(j);
			//	v[j].push_back(i);
			}
		}
	}	
	for(int i = 1; i <= n; i++){
		for(auto x : v[i]){
			cout << x << ' ';
		}
		cout << endl;
	}
	return 0;
}
