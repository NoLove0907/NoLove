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

const string HI = "hi"; // code need to check
const string TRAU = "trau";

void test(int max_n, int max_q) {
    ofstream out;
    out.open("hi.inp");
    int n = 2 + rand() % max_n;
    int q = rand() % max_q + 5;
    db(q)
    out << n << " " << q << "\n";
    for (int i = 0; i < n; i++){
        int x = rand() % n + 1;
        while (x != i + 1) x = rand() % n + 1;
        out << x << " "; 
    }
    cout << "\n";
    for (int i = 0; i < q; i++) {
        int a =rand() % n + 1, b = rand() % n + 1;
        while (a == b) b = rand() % n + 1; 
        out << a << " " << b << "\n"; 
    }
    out.close();
}

int32_t main() {
    int t = 10, max_n, max_id;
    cin >> t >> max_n >> max_id;
    system(string("g++ -DLANG_DAT trau.cpp -o trau.exe").c_str());
    system(string("g++ -DLANG_DAT hi.cpp -o hi.exe").c_str());
    while (t--) {
        db(t)
        // test(max_n, max_id);
        system(string("trau.exe").c_str());
        system(string("hi.exe").c_str());

        if (system(string("cmp trau.out hi.out").c_str()) == 1) {
            db("fuck");
            return 0;
        }
    }

}