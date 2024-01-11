#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<double> v;
    double a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    double Min = a[n - 1];
    int j = 1;
    double sum = a[n - 1];

    for (int i = n - 2; i >= 0; i--) {
        sum += a[i];
        if (a[i] < Min) Min = a[i];
        double res = (sum - Min) / j;
        v.push_back(res);
        j++;
    }

    reverse(v.begin(), v.end());
    auto Max = max_element(v.begin(), v.end());
    cout << distance(v.begin(), Max)<< " ";
}

