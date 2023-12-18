#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;
	int n = s.size();
	s = '$' + s;
	long long ans = 0;
	vector<long long> dp(6);
	for (int i = 1; i <= n; i++) {
		vector<long long> ndp(6);
		// substring starting from index i
		dp[0]++;
		for (int j = 0; j < 6; j++) {
			if (s[i] == "bessie"[j]) {
				// Adding new character to our bessie sequence
				ndp[(j + 1) % 6] += dp[j];
				/*
				 * if we reach the end of a bessie, we need to count the number
				 * of substrings that contain it. dp[5] is the number of
				 * potential start positions (n - i + 1) is the number of
				 * potential end positions (any position including or after
				 * index i). We can multiply those to get the number of
				 * substrings that contain this bessie and add it to the answer.
				 */
				if (j == 5) { ans += (n - i + 1) * dp[5]; }
			} else {
				// The case if we can't add new character
				ndp[j] += dp[j];
			}
		}
		swap(ndp, dp);
	}
	cout << ans << endl;
}