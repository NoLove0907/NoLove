/**
 *    author : Lăng Trọng Đạt
 *    created: 30-10-2023
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

void dfs(int v, int prev, 
    vector<vector<int>>& adj,
    vector<int>& val) {
    val[v] += val[prev];
    for (int u : adj[v]) {
        dfs(u, v, adj, val);
    }
}
bool solve() {
    int q;
    cin >> q;
    vector<vector<int>> adj(q + 1);
    vector<int> val(q + 1);    
    int type, v, x;
    int si = 1;
    while (q--) {
        cin >> type >> v;
        if (type == 1) {
            adj[si].pb(si + 1);
            si++;
        } else {
            cin >> x;
            val[v] += x;
        }
    }
    dfs(1, 0, adj, val);
    for (int i = 1; i <= si; i++) {
        cout << val[i] << " ";
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