#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
string ans;
vector<pair<int, int>> x;
vector<vector<int>> F;
void trace(int n, int k)
{
    if (n == 0)
        return;
    if (F[n][k] == F[n - 1][k])
        trace(n - 1, k);
    else
    {
        trace(n - 1, k - x[n].first);
        ans[n - 1] = '1';
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, k;
    cin >> n >> k;
    F.resize((n + 1), vector<int>(k + 1, 0));
    x.resize(n + 1);
    for (int i = 1; i <= n; i++)
    {
        ans = ans + "0";
        cin >> x[i].second;
    }
    for (int i = 1; i <= n; i++)
        cin >> x[i].first;
    for (int i = 0; i <= n; i++)
    {
        F[i][0] = 0;
        F[0][i] = 0;
    }
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= k; j++)
        {
            if (j < x[i].first)
                F[i][j] = F[i - 1][j];
            else
                F[i][j] = max(F[i - 1][j], F[i - 1][j - x[i].first] + x[i].second);
        }
    cout << F[n][k] << endl;
    trace(n, k);
    for (char i : ans)
        cout << i << ' ';
}