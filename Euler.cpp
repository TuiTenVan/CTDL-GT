#include<bits/stdc++.h>

using namespace std;

int n, k, a[1000][1000];
set<int> adj[1000];
vector<vector<int>> res;

void init(){
    cin >> n >> k;
    for(int i = 1; i <= n; i++){
    	for(int j = 1; j <= n; j++){
	    	cin >> a[i][j];
	    	if(a[i][j]){
		    	adj[i].insert(j);
//		    	adj[y].insert(x);
		    }
	    }
	}
}
void euler(int v){
    stack<int> st;
    vector<int> EC;
    st.push(v);
  //  int ans = 0;
    while(!st.empty()){
        int x = st.top();
        if(adj[x].size() != 0){
            int y = *adj[x].begin();
            st.push(y);
            adj[x].erase(y);
            adj[y].erase(x);
        }
        else{
            st.pop();
            EC.push_back(x);
        }
    }
    res.push_back(EC);
    cout << res.size() << endl;
}
int main(){
    init();
    euler(k);
    return 0;
}
