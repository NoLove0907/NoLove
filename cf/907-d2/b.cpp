/**
 *    author : Lăng Trọng Đạt
 *    created: 30-10-2023
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
int n, q, x;

bool solve() {
    cin >> n >> q;
    vector<vector<int>> p(33, vector<int>());
    for (int i = 0; i < n; i++) {
        cin >> g[i];
        p[__builtin_ctz(g[i])].pb(i);
    }
    vector<int> pref(33, 0);
    int max_x = 33;
    while (q--) {
        cin >> x;
        if (x < max_x)
            pref[x] = (1 << (x - 1));
        max_x = min(x, max_x);
    }
    for (int i = 1; i < 33; i++) {
        pref[i] += pref[i - 1];
        for (int j : p[i])
            g[j] += pref[i];
    }
    for (int i = 0; i < n; i++) cout << g[i] << " ";
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