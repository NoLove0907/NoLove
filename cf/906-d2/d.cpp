/**
 *    author : Lăng Trọng Đạt
 *    created: 29-10-2023
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
pii g[MAXN];
int n, c;

bool solve() {
    std::cin >> n >> c;
    for (int i = 0; i < n; i++) {
        std::cin >> g[i].s;
        g[i].f = g[i].s - i*c - c;
    }
    int total = g[0].s;
    sort(g + 1, g + n, greater<pii>());
    for (int i = 1; i < n; i++) {
        if (total + g[i].f < 0) return false;
        total += g[i].s;
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