#include<bits/stdc++.h>
using namespace std;
map<string,long long>mp;
int main(){
	int n, m;
	cin >> n >> m;
	int t=0;
	while(n--){
		string x;
		cin >> x;
		mp[x]=t++;
	}
	while(m--){
		string a,b;
		cin>>a>>b;
		long long x=abs(mp[a]-mp[b])-1;
		cout<<x<<endl;
	}
	
}

