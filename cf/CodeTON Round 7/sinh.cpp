/**
 *    author : Lăng Trọng Đạt
 *    created: 25-11-2023 
**/
#include <bits/stdc++.h>
using namespace std;
#ifndef LANG_DAT
#define db(...) ;
#endif // LANG_DAT
#define int int64_t
#define mp make_pair
#define f first
#define s second
#define pb push_back
#define all(v) (v).begin(), (v).end()
using pii = pair<int, int>;



int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    if (fopen("hi.inp", "r")) {
        // freopen("hi.inp", "r", stdin);
       freopen("hi.inp", "w", stdout);
    } 

    int t = 5000;
    cout << t << "\n";
    while (t--) {
        int n = rand() % 1234 + 3;
        int x = rand() % n;
        cout << n << " " << x << "\n";
        for (int i = 0; i < n; i++) {
            cout << rand() % (2*n) << " ";
        }
        cout << "\n";
        for (int i = 0; i < n; i++) {
            cout << rand() % (2*n) << " ";
        }
        cout << "\n";

    }
}