#include <bits/stdc++.h>
using namespace std;

int LCA(string& t, string& s) {
    // https://leetcode.com/problems/longest-common-subsequence/
    int n = t.size(), m = s.size();
    vector<vector<int>> dp(2, vector<int>(m + 1));
    for (int i = 1; i <= t.size(); i++) {
        bool id = i & 1;
        for (int j = 1; j <= s.size(); j++) {
            dp[id][j] = max(dp[!id][j], dp[id][j - 1]);
            if (s[j - 1] == t[i - 1])
                dp[id][j] = max(dp[id][j], dp[!id][j - 1] + 1);
        }
    }
    return dp[n & 1][m];
}