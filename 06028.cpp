#include<bits/stdc++.h>

using namespace std;

int main(){
	int n; cin >> n;
	int b = n - 1;
	vector<int> a(n);
	stack<vector<int>> st;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i = 0; i < n - 1; i++){
		int val = i;
		for(int j = i + 1; j < n; j++){
			if(a[j] < a[val]){
				val = j;
			}
		}
		swap(a[i], a[val]);
		st.push(a);
	}
	while(st.size()){
		a = st.top();
//		st.pop();
		cout << "Buoc " << b-- << ": ";
		for(int j = 0; j < n; j++){
			cout << a[j] << " ";
		}
		cout << endl;
		st.pop();
	}
	return 0;
}
