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

const int MAXN = 2e5 + 5;
int g[MAXN];
int n;

bool solve() {
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::cin >> g[i];
    }
    int gcd = g[0];
    // db(gcd)
    for (int i = 1; i < n; i++) {
        gcd = __gcd(gcd, g[i]);
    }
    int res = 0, mx = 0;
    for (int i = 0; i < n; i++) {
        mx = max(mx, g[i] / gcd);
    }
    mx++;
    for (int i = 0; i < n; i++) {
        res += mx - g[i] / gcd;
    }
    db(res, gcd, mx)
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