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



bool solve() {
    int n;
    string str;
    cin >> n >> str;
    for (int x = 1; x <= n; x++) {
        // for (int y = 1; y <= n; y++) {
        int cnt_a = 0, cnt_b = 0;
        int a = 0, b = 0;
        // bool last = false;
        char last;
        for (char c : str) {
            (c == 'A' ? a++ : b++);
            if (a == x || b == x) {
                if (a == x) {
                    last = 'A';
                    // last = false;
                    cnt_a++;
                } else {
                    last = 'B';
                    cnt_b++;
                }
                a = b = 0;
            }
        }
        if (a == 0 && b == 0 && cnt_a != cnt_b) {
            // db(x, a, b, cnt_a, cnt_b)
            if (cnt_a > cnt_b && last == 'A') {
                cout << "A";
                return true;
            } else if (cnt_a < cnt_b && last == 'B') {
                cout << "B";
                return true;
            }
            // cout << (cnt_a > cnt_b ? "A" : "B");
            // return true;
        }
        // }
    }

    return false;
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
        cout << (solve() ? "\n" : "?\n");
    }

}