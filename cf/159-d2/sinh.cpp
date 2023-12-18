#include <bits/stdc++.h>
using namespace std;


int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    if (fopen("hi.inp", "r")) {
        freopen("hi.inp", "r", stdin);
       freopen("hi.out", "w", stdout);
    } 
    // int n = 3e3;
    // cout << n << "\n";
    // string x(n, 'a');
    // for (int i = 0; i < n; i++) {
    //     cout << x.c_str() << "\n";
    // }
    const int Q = 15;
    const int N = 1 << Q;

    char S[N];
    cout << 1 << "\n";
    for (int i = 0; i < N; i++) {
        S[i] = 'a' + __builtin_popcount(i) % 2; 
        cout << S[i];
    }
}
