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

const int MAXN = 20 + 5;
int g[MAXN];
int n;

bool solve() {
    std::cin >> n;
    for (int i = 1; i <= n; i++) {
        std::cin >> g[i];
        // db(i, g[i])
    }

    for (int i = 1; 1 << i <= n; i++) {
        for (int j = (1 << i) + 1; j < (1 << (i + 1)) && j <= n - 1; j++) {
            if (g[j] > g[j + 1]) {
                db(i, j, 1 << i, g[j], g[j + 1])
                return false;
            }
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
        cout << (solve() ? "YES\n" : "NO\n");
    }

}