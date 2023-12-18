#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;


struct Trie {
    char a_init;
    int D;
    int INVALID = -1;
    std::vector<std::vector<int>> child;
    std::vector<int> par;

    using T_NODE = int;
    std::vector<T_NODE> v_info;

    Trie(char a_init = 'a', int D = 26)
        : a_init(a_init), D(D), child(1, std::vector<int>(D, INVALID)), par(1, -1), v_info(1) {}

    int step(int now, char c) const {
        if (now == INVALID) return INVALID;
        return child.at(now).at(c - a_init);
    }

    int add_word(const std::string &str, T_NODE info) {
        int now = 0;
        for (auto &c : str) {
            if (child[now][c - a_init] == INVALID) {
                par.push_back(now);
                child[now][c - a_init] = child.size();
                child.emplace_back(D, INVALID);
                v_info.resize(child.size());
            }
            now = child[now][c - a_init];
        }
        v_info[now] += info;
        return now;
    }
};



int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
	freopen("hi.out", "r", stdin);

    int N;
    cin >> N;
    vector<string> S(N);
    for (auto &s : S) cin >> s;

    Trie trie;
    for (auto s : S) trie.add_word(s, 1);

    for (int i = (int)trie.par.size() - 1; i; --i) trie.v_info.at(trie.par.at(i)) += trie.v_info.at(i);

    long long ret = 0;
    for (const auto &s : S) ret += (long long)s.size() * N * 2;

    for (auto t : S) {
        reverse(t.begin(), t.end());
        int now = 0;
        for (char c : t) {
            now = trie.step(now, c);
            if (now < 0) break;
            ret -= trie.v_info.at(now) * 2;
        }
    }

    cout << ret << '\n';
}
