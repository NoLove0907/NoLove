/**
 *    author : Lăng Trọng Đạt
 *    created: 05-12-2023
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
int l[MAXN], r[MAXN];
int n;

bool check(int k) {
    int mr = 0, ml = 0;
    for (int i = 0; i < n; i++) {
        mr += k;
        ml -= k;
        if (ml > r[i] or mr < l[i]) return false;
        ml = max(ml, l[i]);
        mr = min(mr, r[i]);
    }
    return true;
}
bool solve() {
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::cin >> l[i] >> r[i];
    }
    db(n)
    int lo = 0, hi = 1e9 + 5, res = 1e9 + 5;
    db(check(10))
    while (lo <= hi) {
        int mid = (lo + hi) / 2;
        if (check(mid)) {
            hi = mid - 1;
            res = mid;
        } else {
            lo = mid + 1;
        }
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