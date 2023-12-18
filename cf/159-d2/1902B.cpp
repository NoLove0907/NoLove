/**
 *    author : Lăng Trọng Đạt
 *    created: 03-12-2023
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



bool solve() {
    int n, p, l, t;
    cin >> n >> p >> l >> t;
    int res = 0, lo = 0, hi = n;
    while (lo <= hi) {
        int m = (lo + hi) / 2;
        if (p <= t*min(2*(n - m), (n - 1) / 7 + 1) + l * (n - m)) {
            res = m;
            lo = m + 1;
        } else hi = m - 1;
    }
    cout << res;

    return true;
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    if (fopen("hi.inp", "r")) {
        freopen("hi.inp", "r", stdin);
//        freopen("hi.out", "w", stdout);
    } 

    int t = 1;
    cin >> t;
    while (t--) {
        cout << (solve() ? "\n" : "-1\n");
    }

}