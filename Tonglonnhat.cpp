#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n, m;
		cin >> n >> m;
		int a[n], b[n];
		vector<vector<int>> l(n, vector<int>(m + 1, 0));
		for(int i = 0; i < n; i++){
			int x, y;
			cin >> x >> y;
		}
		for (int i = 0; i < n; i++)
			for (int j = 1; j <= m; j++){
				if (i > 0){
					if (a[i] <= j)
						l[i][j] = max(l[i - 1][j], l[i - 1][j - a[i]] + b[i]);
					else
						l[i][j] = l[i - 1][j];
				}
				else if (a[i] <= j)
					l[i][j] = b[i];
			}
		cout << l[n - 1][m] << endl;
	}
}
