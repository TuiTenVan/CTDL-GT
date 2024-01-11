#include<bits/stdc++.h>

using namespace std;

int main(){
    long long n, a, b;
    cin >> n >> a >> b;
    long long min = 0;
    if (a > b) {
        swap(a, b);
    }
    if (b <= 2 * a) {
        min =(long long) (n / 2) * b + (n % 2) * a;
    } 
    else {
        min = n * a;
    }
    
    cout << min << endl;
    return 0;
}

