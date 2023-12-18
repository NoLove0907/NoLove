/**
 *    author : Lăng Trọng Đạt
 *    created: 18-11-2023
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
    int n, k;
    cin >> n >> k;
    for (int i = 1; i < n; i++) cout << i << " " << i + 1 << "\n";
    int curr, prev = n - 1;
    while (k--) {
        cin >> curr;
        if (curr == prev) cout << "-1 -1 -1\n";
        else cout << n << " " << prev << " " << curr << "\n";
        prev = curr;
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