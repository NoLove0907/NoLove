/**
 *    author : Lăng Trọng Đạt
 *    created: 18-12-2023 
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

const int MAXN = 1000 + 5;
int a[MAXN], b[MAXN], dp[MAXN][MAXN];
int n;

void maxx(int& a, int b) {
    if (b > a) a = b;
}
bool ok(int i, int j) {
    return abs(a[i] - abs(b[j])) <= 4;
}
bool solve() {
    std::cin >> n;
    for (int i = 1; i <= n; i++) {
        std::cin >> a[i];
    }
    for (int i = 1; i <= n; i++) {
        std::cin >> b[i];
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            // maxx(dp[i + 1][j + 1], dp[i][j] + ok(i, j));
            // maxx(dp[i + 1][j + 1], dp[i][j] + ok(i, j + 1));
            // maxx(dp[i + 1][j + 1], dp[i][j] + ok(i + 1, j));
            dp[i][j] = max({dp[i - 1][j - 1] + ok(i, j), dp[i - 1][j], dp[i][j - 1]});
        }
    }
    cout << dp[n][n];
    return true;
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    if (fopen("hi.inp", "r")) {
        freopen("hi.inp", "r", stdin);
//        freopen("hi.out", "w", stdout);
    } else if(fopen("nocross.in", "r")){
        freopen("./nocross.in", "r", stdin);
        freopen("./nocross.out", "w", stdout);
    }


    int t = 1;
    //cin >> t;
    while (t--) {
        cout << (solve() ? "" : "");
    }

}
