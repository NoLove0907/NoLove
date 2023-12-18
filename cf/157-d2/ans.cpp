#include <bits/stdc++.h>
using namespace std;

using ll = int64_t;
int main(){
    if (fopen("hi.inp", "r")) {
        freopen("hi.inp", "r", stdin);
//        freopen("hi.out", "w", stdout);
    } 
	ios_base::sync_with_stdio(false), cin.tie(nullptr);
	int N;
	cin >> N;
	vector<string> S(N);
	map<pair<int,int>, int> freq_front;
	map<pair<int,int>, int> sums_front;
	ll ans = 0;
	for(string& s : S){
		cin >> s;
		int K = (int)s.size();
		for(int i = 0; i <= K; i++){
			int front = 0;
			for(int j = 0; j < i; j++) front += (s[j] - '0');
			for(int j = i; j < K; j++) front -= (s[j] - '0');
			int diff = i - (K-i);
			if(i == K){
				sums_front[{front, diff}] += 1;
			}
			freq_front[{front, diff}] += 1;
		}
	}
	for(string& s : S){
		int K = (int)s.size();
		for(int i = 0; i <= K; i++){
			int front = 0;
			for(int j = 0; j < i; j++) front += (s[j] - '0');
			for(int j = i; j < K; j++) front -= (s[j] - '0');
			int diff = i - (K-i);
			if(i == 0){
				ans += freq_front[{-front, -diff}];
			} else {
				ans += sums_front[{-front, -diff}];
			}
		}
	}
	cout << ans << '\n';
}