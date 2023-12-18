/**
 *    author : Lăng Trọng Đạt
 *    created: 05-12-2023
**/
#include <bits/stdc++.h>
using namespace std;
#ifndef LANG_DAT
#define db(...) ;
#endif // LANG_DAT
// #define int int64_t
#define mp make_pair
#define f first
#define s second
#define pb push_back
#define all(v) (v).begin(), (v).end()
using pii = pair<int, int>;

const int MAXN = 1e7 + 5;
map<pii, int> g[3];
int n;
int res;

int dfs(int pos, int k, int kd, int s, int sd, int cnt) {
    // db("fuck")
    // db(k, kd, cnt, pos, s)
    if (s > k or sd > kd) return 0;
    if (s == k && sd == kd) {
        res++;
        return 1;
    }
    pii x = {k, kd};
    // db(g[cnt][x], x, cnt)
    if (s == 0 && g[cnt].count(x)) return g[cnt][x];
    int tmp = 0;
    for (int i = 0; i < 10; i++) {
        if (s == 0 && i == 0) continue;
        tmp += dfs(pos + 1, k, kd, s*10 + i, sd + i, cnt);
        // db("f")
    }
    if (cnt) tmp += dfs(0, k - s, kd - sd, 0, 0, cnt - 1);
    // db(g[cnt][x], cnt, x, tmp)
    return g[cnt][x] = tmp;
}
bool solve() {
    int n = 11;
    cin >> n;
    int x = 0, tmp = n;
    while (tmp > 0) {
        x += tmp % 10;
        tmp /= 10;
    }
    // db(n, x)
    res = 0;
    // vector<int> 
    cout << dfs(0, n, x, 0, 0, 2);
    // cout << res;
    // db(res)
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