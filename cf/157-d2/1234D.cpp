/**
 *    author : Lăng Trọng Đạt
 *    created: 04-11-2023
**/
#include <bits/stdc++.h>
using namespace std;
#define int int64_t
#define bs bitset<26>
const int MAXN = 1e5 + 5;
vector<int> st(3*MAXN);
int n, si = 1;
string s;

void upd(int pos) {
    for (int i = (pos + si) / 2; i > 0; i /= 2)
        st[i] = st[2*i] | st[2*i + 1];
}
int get(int l, int r) {
    int res = 0;
    for (l += si, r += si; l < r; l /= 2, r /= 2) {
        if (l & 1) res |= st[l++];
        if (r & 1) res |= st[--r];
    }
    for (int i = 0; i < 32; i++) {
        if ((1 << i) & res) {
        }
    }
    return __builtin_popcount(res);
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    // freopen("hi.inp", "r", stdin);
    cin >> s;
    n = s.size();
    si = n;
    for (int i = 0; i < n; i++) {
        st[i + si] = (1 << (s[i] - 'a'));
    }
    for (int i = si - 1; i > 0; i--) {
        st[i] = st[2*i] | st[2*i + 1];
    }
    int t = 1;
    cin >> t;
    int type, pos, l, r;
    char c;
    while (cin >> type) {
        if (type == 1) {
            cin >> pos >> c;
            pos--;
            s[pos] = c;
            st[pos + si] = (1 << (s[pos] - 'a'));
            upd(pos);
        } else {
            cin >> l >> r; 
            cout << get(l - 1, r) << "\n";
        }
    }

}