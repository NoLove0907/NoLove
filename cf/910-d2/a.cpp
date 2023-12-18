/**
 *    author : Lăng Trọng Đạt
 *    created: 19-11-2023
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
    int n, k, cnt = 0;
    string s;
    cin >> n >> k >> s;
    for (char c : s) {
        cnt += (c == 'B');
    }
    db(cnt, n, k)
    if (cnt > k) {
        int cnt2 = 0;
        for (int i = n - 1; i >= -1; i--) {
            if (cnt2 == k) {
                cout << "1\n" << i + 1<< " A";
                return true;
            }
            cnt2 += s[i] == 'B';
        }
    } else if (cnt == k) cout << "0";
    else {
        int cnt2 = 0;
        for (int i = 0; i <= n; i++) {
            if (cnt2 == k - cnt) {
                cout << "1\n" << i << " B";
                return true;
            }
            cnt2 += (s[i] == 'A');
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