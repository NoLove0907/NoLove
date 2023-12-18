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
    vector<int> up, lo;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'b') {if (!lo.empty()) lo.pop_back();}
        else if (s[i] == 'B') {if (!up.empty()) up.pop_back();}
        else if (s[i] - 'a' < 27 && 0 <= s[i] - 'a') {lo.pb(i);}
        else up.pb(i);
        // db(up.size(), s[i], s[i] - 'a' < 27 && 0 < s[i] - 'a')
    }
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'b' or s[i] == 'B') continue;
        if (binary_search(all(up), i) or binary_search(all(lo), i)) cout << s[i];
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