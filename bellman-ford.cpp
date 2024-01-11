#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

const int MAXN = 100;
const int INF = 1e9;
int c[MAXN][MAXN];
int d[MAXN];
int pre[MAXN];
int n, s;

void nhap() {
    cin >> n >> s;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> c[i][j];
            if (i == j) c[i][j] = 0;
            else if (c[i][j] == 0) c[i][j] = INF;
        }
    }
}

void init() {
    for (int i = 1; i <= n; i++) {
        d[i] = c[s][i];
        pre[i] = s;
    }
}

void bellman_ford(int s) {
    d[s] = 0;
    for (int k = 1; k <= n - 2; k++) {
        for (int v = 1; v <= n; v++) {
            if (v != s) {
                for (int u = 1; u <= n; u++) {
                    if (d[v] > d[u] + c[u][v]) {
                        d[v] = d[u] + c[u][v];
                        pre[v] = u;
                    }
                }
            }
        }
    }
    for(int i = 1; i <= n; i++) {
        if(d[i] > 100000) {
            cout << "K/c " << s << " -> " << i << " = " << "INF;" << endl;
        }
        else {
            cout << "K/c " << s << " -> " << i << " = " << d[i] << ";" << setw(3);	
			int j = pre[i];
			cout << i << " <- ";
			while( j != s){
				cout << j << " <- ";
				j = pre[j];
			}
			cout << s << endl;
        }
    }
}

int main() {
    nhap();
    init();
    bellman_ford(s);
    return 0;
}
//    0	7	0	9	4	0	0	0	0
//	0	0	3	0	-4	0	0	0	0
//	0	0	0	0	-8	0	-3	0	0
//	0	0	0	0	0	0	0	-4	0
//	0	0	0	5	0	2	0	3	0
//	0	0	0	0	0	0	5	0	2
//	0	0	0	0	0	0	0	0	-7
//	0	0	0	0	0	-2	0	0	-3
//	0	0	0	0	0	0	0	0	0
