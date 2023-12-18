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
int n, k;

bool solve() {
    std::cin >> n >> k;
    vector<bool> mark(n);
    for (int i = 1; i <= n; i++) {
        std::cin >> g[i];
    }
    for (int i = 1; i < n; i++) {
        mark[i] = __gcd(g[i], g[i + 1]) == 1;
    }
    for (int i = n - 1; i > 0 && k; i--) {
        if (mark[i]) {
            k--;
            mark[i - 1] = mark[i] = 0;
            mark[i - 1] = 
        }
    }
    int cnt = 0;
    for (int i = 1; i < n; i++) cnt += mark[i];
    cout << cnt;
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