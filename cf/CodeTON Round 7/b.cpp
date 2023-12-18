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



bool solve() {
    int n;
    string s;
    cin >> n >> s;
    int res = 0;
    bool can = false;
    for (int i = n - 1, cnt = 0; i >= 0; i--) {
        if (s[i] == 'B') cnt++;
        else {
            res += cnt + can;
            // can = (i > 0 && s[i - 1] == 'B');
            cnt = (cnt > 0);
        }
        db(i, res, can)
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