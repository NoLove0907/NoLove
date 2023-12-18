/**
 *    author : Lăng Trọng Đạt
 *    created: 07-11-2023
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
int g[MAXN], b[MAXN];
int n, m;

bool solve() {
    std::cin >> n >> m;
    vector<int> lis;
    // int ind = -1;
    vector<int> ind;
    for (int i = 0; i < n; i++) {
        std::cin >> g[i];
        auto id = lower_bound(all(lis), g[i]);
        if (id == lis.end()) {
            lis.pb(g[i]);
            ind = {i};
        }
        else {
            if (id - lis.begin() == (int)lis.size() - 1 && *id != g[i])
                ind.pb(i);
            *id = g[i];
        }
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
    sort(b, b + m);
    // db(n, m, ind, g[ind])
    // db(g[ind])
    reverse(all(ind));
    int j = m - 1;
    for (int i = 0; i < n; i++) {
        if (i == ind.back()) {
            for (; j >= 0 && b[j] >= g[i]; j--) 
                cout << b[j] << " ";
            ind.pop_back();
        }
        cout << g[i] << " ";
    }
    while (j >= 0) {
        cout << b[j--] << " ";
    }
    // db(lis.size())
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