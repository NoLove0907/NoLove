/**
 *    author : Lăng Trọng Đạt
 *    created: 17-11-2023
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

const int MAXN = 150000 + 5;
int g[MAXN];
int n;

int res(int x) {
    long long  a = 0, b = 1e18;
    for (int i = x; i <= n; i += x) {
        a = max(a, g[i] - g[i - x]);
        b = min(b, g[i] - g[i - x]);
    }
    // db(x, a, b)
    return abs(a - b);
}
bool solve() {
    std::cin >> n;
    for (int i = 1; i <= n; i++) {
        std::cin >> g[i];
        g[i] += g[i - 1];
    }
    int ans = res(1);
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            ans = max(ans, res(i));
            ans = max(ans, res(n / i));
        }
    }
    cout << ans;
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