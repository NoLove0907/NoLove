/**
 *    author : Lăng Trọng Đạt
 *    created: 03-12-2023
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
    int khong = 0, mot = 0;
    bool has = false;
    for (int i = 0; i < n; i++) {
        (s[i] == '0' ? khong++ : mot++);
        if (i > 0 && s[i] == '0' && s[i - 1] == '1') has = true;
        if (i > 0 && s[i] == '0' && s[i - 1] == '0') has = true;
        if (i > 0 && s[i] == '1' && s[i - 1] == '0') has = true;
    }


    return has or (khong > mot);
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
        cout << (solve() ? "YES\n" : "NO\n");
    }

}