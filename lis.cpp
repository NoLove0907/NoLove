/**
 *    author : Lăng Trọng Đạt
 *    created: 03-11-2023 
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

bool check(int i) {
    map<int, int> s;
    while (i > 0) {
        s[i % 10]++;
        i /= 10;
    }
    bool res = false;
    for (auto p : s) {
        if (p.f % 2 == 1 && p.second == 2)
            res = true;
    }
    return res;
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    if (fopen("hi.inp", "r")) {
        freopen("hi.inp", "r", stdin);
       freopen("hi.out", "w", stdout);
    } 

    int ans = 0;
    for (int i = 0; i < 1e4; i++) {
        if (check(i)) {
            ans += 1 + (i < 100);
            db(i)
        }
    }    
    db(ans);
}