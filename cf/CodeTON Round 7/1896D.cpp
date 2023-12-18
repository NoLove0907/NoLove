/**
 *    author : Lăng Trọng Đạt
 *    created: 26-11-2023
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
    int m, op, x, a;
    int total = 0;
    std::cin >> n >> m;
    set<int> pos;
    for (int i = 0; i < n; i++) {
        std::cin >> g[i];
        if (g[i] == 1) pos.insert(i);
        total += g[i];
    }
    // db(n, m)
        // db(n, m)
    while (m--) {
        cin >> op >> x;
        // db(op, x)
        int cnt = pos.size();
        if (op == 2) {
            x--;
            cin >> a;
            // db(x)
            pos.erase(x);
            g[x] = a;
            if (a == 1) pos.insert(x);
        } else {
            // db(pos.size())
            int total = 2*n - cnt;
            // db(n, x)
            // db(x, total, cnt)
            if ((x - cnt) % 2 == 1) {
                if (!pos.empty()) {
                    int l = *pos.begin();
                    int r = *pos.rbegin();
                    // db(n, l, r, x, total - 2*(n - r + 1) - 1)
                    if (x <= max(total - 2*l - 1, total - 2*(n - r - 1) - 1)) cout << "YES\n";
                    else cout << "NO\n";
                } else cout << "NO\n";
            } else {
                cout << (total >= x ? "YES\n" : "NO\n");
            }
        }
    }
    return true;
}

int32_t main() {
    // cin.tie(0)->sync_with_stdio(0);
    if (fopen("hi.inp", "r")) {
        freopen("hi.inp", "r", stdin);
    //    freopen("hi.out", "w", stdout);
    } 

    int t = 1;
    cin >> t;
    while (t--) {
        cout << (solve() ? "" : "-1\n");
    }

}