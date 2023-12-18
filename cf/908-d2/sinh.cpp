/**
 *    author : Lăng Trọng Đạt
 *    created: 09-11-2023 
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
       freopen("hi.inp", "w", stdout);
    } 

    cout << "1\n100000\n";
    int x = 100000000000000000;
    for (int i = 0; i < 100000; i++) {
        if (i & 1)
            cout << "1 999999999999 1000000000000\n" << x-- << "\n100000000000000000\n";
        else 
            cout << "1 1000000000000 1000000000000\n" << x-- << "\n100000000000000000\n";
    }

}