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



bool solve() {
    string s;
    cin >> s;
    for (int i = 0; i < 8; i++) {
        if (i + 1 == s[1] - '0') continue;
        cout << s[0] << i + 1 << "\n";
    }
    for (int i = 0; i < 8; i++) {
        if (i == s[0] - 'a') continue;
        cout << char('a' + i) << s[1] << "\n";
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
        cout << (solve() ? "" : "-1\n");
    }

}