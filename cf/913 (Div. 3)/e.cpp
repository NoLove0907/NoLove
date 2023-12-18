/**
 *    author : Lăng Trọng Đạt
 *    created: 05-12-2023
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


int hi(int k) {
    db(k)
	int r = 0;
	for (int i = 0; i <=k; ++i)
		for (int j = 0; j <=k; ++j)
			for (int g = 0; g <=k; ++g)
				if (i + j + g ==k) r++;
	return r;
}

bool solve() {
    string s;
	cin >> s;
    db(s.c_str())
	int res = 1;
	for (int i = 0; i < s.size(); ++i) {
		int k = s[i] - '0';
		res *= hi(k);
	}
	cout << res << '\n';
    

    return true;
}

int32_t main() {
    // cin.tie(0)->sync_with_stdio(0);
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