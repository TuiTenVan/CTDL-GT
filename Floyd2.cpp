#include <bits/stdc++.h>
using namespace std;

#define INF INT_MAX
#define MAXN 1001

int n, d[MAXN][MAXN];
int parent[MAXN][MAXN];

void floyd() {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            parent[i][j] = (d[i][j] == INF ? INF : j);
        }
    }
    for (int k = 1; k <= n; k++) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (d[i][k] != INF && d[k][j] != INF) {
                    if (d[i][j] > d[i][k] + d[k][j]) {
                        d[i][j] = d[i][k] + d[k][j];
                        parent[i][j] = parent[i][k];
                    }
                }
            }
        }
    }
}

int main() {
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> d[i][j];
            if (d[i][j] == 0 && i != j) d[i][j] = INF;
        }
    }

    floyd();

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (d[i][j] == INF) {
                cout << " K/c " << i << " -> " << j << " = INF; ";
            }
            else {
                cout << " K/c " << i << " -> " << j << " = " << d[i][j] << "; ";
                int p = i;
                while (p != j) {
                    cout << p << " --> ";
                    p = parent[p][j];
                }
                cout << j << endl;
            }
        }
        cout << endl;
    }

    return 0;
}
