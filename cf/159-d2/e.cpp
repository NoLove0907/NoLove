#include <bits/stdc++.h>
using namespace std;

// boost & macro
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#define nmax 1000005
#define pint pair<int, int>
#define pong pair<ll, ll>
#define pool pair<bool, bool>
#define vint vector<int>
#define vong vector<ll>
#define stkii stack<int>
#define stkll stack<long long>
#define fi first
#define se second
typedef string str;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uii;

#define oo 1e18
#define MOD 1000000007ll

// necessary
ll n = 0, m = 0, k = 0, t = 0, tmp = 0, ans = 0, run = 0, ins = 0;
bool chk = 0;
str s;
str rr[nmax];

// optional
unordered_map<ll, ll> mp[2];

// funcs


int main(){
	freopen("hi.out", "r", stdin);
	// freopen("out1.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
	ans = 0;
    map<ll, vector<ll>> mpp;
	for(ll i = 1; i <= n; ++i){
		cin >> rr[i];
		tmp = 0;
		for(ll j = 0; j < rr[i].length(); ++j){
			tmp = tmp*37+rr[i][j]-'a'+1;
			//tmp %= MOD;
			++mp[0][tmp];
			ans -= mp[1][tmp];
            // mpp[tmp]++;
            // db(j, tmp)
            mpp[tmp].push_back(j);
		}
		tmp = 0;
		for(ll j = rr[i].length()-1; j >= 0; --j){
			tmp = tmp*37+rr[i][j]-'a'+1;
			//tmp %= MOD;
			++mp[1][tmp];
			ans -= mp[0][tmp];
		}
	}
	ll sumlen = 0;
	for(ll i = 1; i <= n; ++i){
		sumlen += rr[i].length()*n;
	}
    for (auto p : mpp) 
    if (p.second.size() > 1)
    db(p)
//	sumlen /= 2;
	cout << (sumlen+ans)*2 << "\n";
}

// COMMENT:

/* <<<CODE EXPLANATION>>>



*/


/* <<<CRE>>>

I, Sheyer, guaranteed that the idea for this code is personally made up by me: <Sheyer>
In case it is not, I give credit to the original Author:

I, Sheyer, guaranteed that this code is originally created by me, based on the idea mentioned above: <Sheyer>

In belief of h1a4c3k, a long lost account

*/
