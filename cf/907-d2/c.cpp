/**
 *    author : Lăng Trọng Đạt
 *    created: 31-10-2023
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

void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#define dbg(...) cerr << '[' << __FILE__ << ':' << __LINE__ << "] (" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

bool solve() {
    int n, sum = 0, need = 0, curr = 0;
    cin >> n;
    vector<int> v(n + 1), pref(n + 1);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        sum += v[i];
    }
        sort(all(v), greater<int>());
    for (int i = 0; i < n; i++) {
        pref[i + 1] += pref[i] + v[i];
    }
    while (pref[need] < sum / 2) {
        need++;
    }
    cout << (sum + 1) / 2 + need;
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