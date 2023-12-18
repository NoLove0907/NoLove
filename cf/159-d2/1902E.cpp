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

const int MAXN = 2e5 + 5;
string g[MAXN];
int pref[26][MAXN];
int n;

bool solve() {
    std::cin >> n;
    map<char, int> mp;
    map<char, int> cnt;
    int total = 0, res = 0;
    for (int i = 0; i < n; i++) {
        std::cin >> g[i];
        int x = g[i].size();
        total += (int)(x);
        for (int j = 1; j < x; j++) {
            if (j == x - 1) pref[g[i][0] - 'a'][x - 1]++;
            else if (g[j - 1] != g[j]) pref[g[i][0] - 'a'][j - 1]++;
        }
        if (x == 0) pref[g[i][0] - 'a'][0]++;
    }
    for (int i = 0; i < 26; i++) {
        for (int j = MAXN - 2; j > 0; j--) {
            pref[i][j] += pref[i][j + 1];
        }
    }
    db(total, cnt.size())
    res = 2*total;
    for (int i = 0; i < n; i++) {
        int x = g[i].size();
        for (int j = 1; j < x; j++) {
            if (j == x - 1) res -= pref[g[i].back() - 'a'][x - 1];
            else if (g[x - j - 1] != g[x - j]) res -= pref[g[i].back() - 'a'][j - 1]++;
        }
        if (x == 0) res -= pref[g[i].back() - 'a'][0];
        // res += (int)(g[i].size()) * n  - 2*cnt[g[i].back()] + total;
        // db(res, g[i].back(), cnt[g[i].back()])

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
    // cin >> t;
    while (t--) {
        cout << (solve() ? "\n" : "-1\n");
    }

}