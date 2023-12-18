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


const int MAXN = 100 + 5;
int g[MAXN];
int n;
bool solve() {
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::cin >> g[i];
    }


    return g[0] == 1;
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
        cout << (solve() ? "Yes\n" : "No\n");
    }

}