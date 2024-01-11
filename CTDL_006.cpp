#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	int a[1000];
	map<int, int> mp;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		mp[a[i]]++;
	}
	for(int i = 0; i < n; i++){
		if(mp[a[i]] != 0){
			cout << a[i] << ' ';
			mp[a[i]] = 0;
		}
	}
	return 0;
}
