/**
 *    author : Lăng Trọng Đạt
 *    created: 06-12-2023 
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



int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    if (fopen("hi.inp", "r")) {
        freopen("hi.inp", "r", stdin);
//        freopen("hi.out", "w", stdout);
    } 

    set<set<char>> s;
    for (int i = 100; i < 1000; i++) {
        if (i % 3 == 0) {
            string t = to_string(i);
            set<char> x = {t[0], t[1], t[2]};
            if (x.size() == 3 && !x.count('0'))
                s.insert(x);
        }
    }
    for (auto x: s) {
        for (char c : x) cout << c << " ";
        cout << "\n";
    }
    db(s.size())
}