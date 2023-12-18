/**
 *    author : Lăng Trọng Đạt
 *    created: 07-11-2023
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

const int MAXN = 100 + 5;
int g[MAXN];
int n;

bool solve() {
    std::cin >> n;
    map<int, int> f;
    for (int i = 0; i < n; i++) {
        std::cin >> g[i];
        f[g[i]]++;
    }

    vector<int> v;
    for (auto& p : f)
        if (p.s >= 2)
            v.pb(p.f);
    if (v.size() < 2) return false;
    int a = 1, b = 2;
    for (int i = 0; i < n; i++) {
        if (g[i] == v[0]) {
            cout << min(a++, 2LL) << " ";
        } else if (g[i] == v[1]) {
            cout << min(b++, 3LL) << " ";
        } else {
            cout << 1 << " ";
        }
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
        cout << (solve() ? "\n" : "-1\n");
    }

}