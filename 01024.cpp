#include<bits/stdc++.h>

using namespace std;

int n, k, a[1000], ok;
string s;

void sinh(){
	int i = k;
	while(i > 0 && a[i] == n - k + i){
		i--;
	}
	if(i > 0){
		a[i]++;
		for(int j = i + 1; j <= k; j++){
			a[j] = a[i] + j - i;
		}
	}
	else{
		ok = 0;
	}
}
int main(){
	cin >> n >> k;
	vector<string> v;
	map<string, int> mp;
	cin.ignore();
	for(int i = 0; i < n; i++){
		cin >> s;
		mp[s]++;
	}
	for(auto it : mp){
		v.push_back(it.first);
	}
	n = v.size();
	v.insert(v.begin(),"");
	for(int i = 1; i <= k; i++){
		a[i] = i;
	}
	ok = 1;
	while(ok){
		for(int i = 1; i <= k; i++){
			cout << v[a[i]] << ' ';
		}
		cout << endl;
		sinh();
	}
	return 0;
}
