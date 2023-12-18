/**
 *    author : Lăng Trọng Đạt
 *    created: 25-11-2023
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
int b[MAXN], res[MAXN];
array<int, 3> a[MAXN];
int n, x;

bool solve() {
    std::cin >> n >> x;
    for (int i = 0; i < n; i++) {
        std::cin >> a[i][1];
        a[i][0] = i;
    }
    for (int i = 0; i < n; i++) {
        std::cin >> b[i];
    }
    sort(b, b + n);
    sort(a, a + n, [](array<int, 3>& g, array<int, 3>& h) -> bool {
        return g[1] < h[1];
    });
    for (int i = 0, j = x; i < n - x; i++) {
        db(i, j, b[j], a[i][1])
        if (b[j] < a[i][1]) return false;
        a[i][2] = b[j++];
    }
    for (int i = n - x, j = 0; i < n; i++) {
        db(a[i][1], j, i, b[j])
        if (b[j] >= a[i][1]) return false;
        a[i][2] = b[j++];
    }
    sort(a, a + n, [](array<int, 3>& g, array<int, 3>& h) -> bool {
        return g[0] < h[0];
    });
    cout << "YES\n";
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        cout << a[i][2] << " ";
        cnt += a[i][1] > a[i][2];
    }
    if (cnt != x) {
        db(cnt, x, "FUCKKKKKK");
        exit(0);
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
        cout << (solve() ? "\n" : "NO\n");
    }

}