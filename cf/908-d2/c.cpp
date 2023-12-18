/**
 *    author : Lăng Trọng Đạt
 *    created: 08-11-2023
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
int n, k;

bool solve() {
    std::cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        std::cin >> g[i];
    }
    int last = n;
    k = min(n, k);
    while (k--) {
        if (g[last] > n) return false;
        last = (last - n + g[last]) % n;
    }
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
        cout << (solve() ? "YES\n" : "NO\n");
    }

}