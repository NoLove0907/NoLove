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



int32_t main() {
    // freopen("in.out", "w", stdout);
    ofstream out("in.out");
    // out
    int l = 13, r = 65, i;
    cin >> l >> r;
    for (i = l; i < r; i += 4) {
        // db(i);
        out << i + 1 << ", " << i << ", ";
    }
    out << "\n";
    i--;
    // db(i)
    for (i -= 4*(i > r); i > l + 1; i -= 4)  {
        out << i << ", " << i - 1 << ", ";
    }
    out.close();
    system("notepad in.out");
}