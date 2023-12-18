/**
 *    author : Lăng Trọng Đạt
 *    created: 29-10-2023
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


vector<vector<int>> dp;
int n, m;
string s, t;
vector<int> res;

bool de(string s, int pos = 0, int cnt = 0) {
	// db(s.c_str(), pos, cnt);
	if (cnt > 300) return false;
	res.resize(0);
	for (int l = 0, r = s.size() - 1; l < r; l++, r--) {
		if (s[l] == s[r]) {
			// dbg(s, pos, l, r, s[l], cnt);
			vector<int> curr = res;
			if (s[r] == '1' && de("1" + s.substr(l, r - l), l + pos + 1, cnt + 1)) {
				if (curr.size() + res.size() + 1 <= 300) {
					curr.push_back(l + pos - 1);
					for (int i : res) curr.push_back(i);
					swap(res, curr); return true;	
				}
			}
			if (s[l] == '0' && de(s.substr(l + 1, r - l) + "0", l + pos + 1, cnt + 1)) {
				if (curr.size() + res.size() + 1 <= 300) {
					curr.push_back(r + pos);
					for (int i : res) curr.push_back(i);
					swap(res, curr); return true;
				}
			}
			return false;
		}
	}
	return true;
}

bool solve()
{
	int n;
	cin >> n;
	string s;
	cin >> s;
	// dbg(n, s);
	if (n % 2 == 0 && de(s)) {
		cout << res.size() << "\n";
		for (int i : res) cout << i + 1 << " ";
		return true;
	} else return false;
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