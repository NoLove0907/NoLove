/**
 *    author : Lăng Trọng Đạt
 *    created: 04-12-2023 
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

int a[11];
bool in[10];
int res = 0;
vector<int> xx[5];
void dfs(int pos) {
    if (pos == 6) {
        bool ok = true;
        // int ok = 0;
        int x = 0, cnt = 0;
        int digit_sum = 0;
        for (int i = 1; i < pos; i++) {
            x = 10*x + a[i];
            cnt += a[i] == 0;
            digit_sum += a[i];
        }
        if (digit_sum == 4 && a[1] > 0 && x % 11 == 0) {
            cout << x << " ";
            res++;
            xx[cnt].pb(x);
            // cout << x << "\n";
        }
    } else {
        for (int i = 0; i < 5; i++) {
            if (!in[i]) {
                // in[i] = true;
                a[pos] = i;
                dfs(pos + 1);
                in[i] = false;
            }
        }
    }
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    if (fopen("hi.inp", "r")) {
        freopen("hi.inp", "r", stdin);
       freopen("hi.out", "w", stdout);
    } 
    // a[5] = 6;
    dfs(1);
    // // for (auto x : s) cout << x;
    // // db(s.size())
    // for (int i = 1e4; i < 1e5; i++) {
    //     if (i % 11 == 0 && i % 10 == 6) {
    //         cout << i << " ";
    //         res++;
    //     }
    // }
    cout << "\n\n" << res;
    for (int i = 1; i < 5; i++) {
        db(xx[i].size(), xx[i])
    }
}