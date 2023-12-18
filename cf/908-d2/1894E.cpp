/**
 *    author : Lăng Trọng Đạt
 *    created: 09-11-2023
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
    int m;
    cin >> m;
    vector<vector<int>> a(m), c(m);
    vector<int> l(m), r(m), n(m);
    int lb = 0, rb = 0;
    map<int, vector<pii>> mp;
    map<int, int> sumr;
    for (int i = 0; i < m; i++) {
        cin >> n[i] >> l[i] >> r[i];
        lb += l[i]; rb += r[i];
        a[i].resize(n[i] + 1); c[i].resize(n[i] + 1);
        for (int j = 1; j <= n[i]; j++) {
            cin >> a[i][j];
            mp[a[i][j]].pb({i, j});
            sumr[a[i][j]] += r[i];
        }
        for (int j = 1; j <= n[i]; j++) {
            cin >> c[i][j];
            c[i][j] += c[i][j - 1];
        }
    }
    int res = 1e18;
    for (int x = lb; x <= rb && res; x++) {
        int have = rb - sumr[x], curr = 0;
        int need = 0;
        for (pii& p : mp[x]) {
            int i = p.f, j = p.s;
            int tmp = c[i][j - 1] + c[i][n[i]] - c[i][j];
            if (tmp < l[i]) need += l[i] - tmp; 
            have += min(r[i], max(tmp, l[i]));
        }
        res = min(res, need + max(x - have, 0LL));
    }
    cout << res;
    return true;
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    if (fopen("hi.inp", "r")) {
        freopen("hi.inp", "r", stdin);
    //    freopen("hi.out", "w", stdout);
    } 

    int t = 1;
    cin >> t;
    while (t--) {
        cout << (solve() ? "\n" : "-1\n");
    }

}