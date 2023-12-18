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

const int MAXN = 2e5 + 5;
int g[MAXN];
int n;

bool solve() {
    std::cin >> n;
    int res = -1e9;
    for (int i = 0, sum = 0; i < n; i++) {
        std::cin >> g[i];
        if ((i != 0 && ((g[i] - g[i - 1]) % 2 == 0)) or sum < 0) sum = 0;
        sum += g[i];
        // db(sum, i, g[i])
        res = max(res, sum);
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