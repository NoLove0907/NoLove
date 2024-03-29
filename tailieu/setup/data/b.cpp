{
	// Place your global snippets here. Each snippet is defined under a snippet name and has a scope, prefix, body and 
	// description. Add comma separated ids of the languages where the snippet is applicable in the scope field. If scope 
	// is left empty or omitted, the snippet gets applied to all languages. The prefix is what is 
	// used to trigger the snippet and the body will be expanded and inserted. Possible variables are: 
	// $1, $2 for tab stops, $0 for the final cursor position, and ${1:label}, ${2:another} for placeholders. 
	// Placeholders with the same ids are connected.
	// Example:
	"on": {
		"scope": "cpp",
		"prefix": "on",
		"body": [
			"/**",
" *    author : Lăng Trọng Đạt",
" *    created: $CURRENT_DATE-$CURRENT_MONTH-$CURRENT_YEAR ",
"**/",
"#include <bits/stdc++.h>",
"using namespace std;",
"#ifndef LANG_DAT",
"#define db(...) ;",
"#endif // LANG_DAT",
"#define int long long",
"#define mp make_pair",
"#define f first",
"#define se second",
"#define pb push_back",
"#define all(v) (v).begin(), (v).end()",
"using pii = pair<int, int>;",
"using vi = vector<int>;",
"#define FOR(i, a, b) for (int (i) = a; (i) <= (b); i++)",
"void mx(int& a, int b) { if (b > a) a = b; }",
"void mi(int& a, int b) { if (b < a) a = b; }",
"#define si(x) (int)(x.size())",
"const int INF = 1e18;",
"const int MOD = 1e9 + 7;",
"",
"$1",
"",
"int32_t main() {",
"    cin.tie(0)->sync_with_stdio(0);",
"    if (fopen(\"hi.inp\", \"r\")) {",
"        freopen(\"hi.inp\", \"r\", stdin);",
"//        freopen(\"hi.out\", \"w\", stdout);",
"    } ",
"",
"    $0",
"",
"}",
		],
		"description": "init code"
	},
	"init for offline judge": {
		"scope": "cpp",
		"prefix": "off",
		"body": [
			"/**",
			" *    author : Lăng Trọng Đạt",
			" *    created: $CURRENT_DATE-$CURRENT_MONTH-$CURRENT_YEAR ",
			"**/",
"#include <bits/stdc++.h>"
"using namespace std;"
"#ifndef LANG_DAT"
"#define db(...) ;"
"#endif // LANG_DAT"
"#define int long long"
"#define mp make_pair"
"#define f first"
"#define se second"
"#define pb push_back"
"#define all(v) (v).begin(), (v).end()"
"using pii = pair<int, int>;"
"using vi = vector<int>;",
"#define FOR(i, a, b) for (int (i) = a; (i) <= (b); i++)",
"void mx(int& a, int b) { if (b > a) a = b; }",
"void mi(int& a, int b) { if (b < a) a = b; }",
"#define si(x) (int)(x.size())",
"const int INF = 1e18;",
"const int MOD = 1e9 + 7;",
""
"$2"
""
"bool solve() {"
"	$0"
""
"    return true;"
"}"
""
"int32_t main() {"
"    cin.tie(0)->sync_with_stdio(0);"
"    if (fopen(\"hi.inp\", \"r\")) {"
"        freopen(\"hi.inp\", \"r\", stdin);"
"//        freopen(\"hi.out\", \"w\", stdout);"
"    } else if(fopen(\"${1: filename}.in\", \"r\")){"
"        freopen(\"./${1: filename}.in\", \"r\", stdin);"
"        freopen(\"./${1: filename}.out\", \"w\", stdout);"
"    }"
""
""
"    int t = 1;"
"    //cin >> t;"
"    while (t--) {"
"        cout << (solve() ? \"\" : \"\");"
"    }"
""
"}"
""
		]
	},
	"mu": {
		"scope": "cpp",
		"prefix": "mu",
		"description": "code for multi test case",
		"body" : [
			"/**"
" *    author : Lăng Trọng Đạt"
" *    created: $CURRENT_DATE-$CURRENT_MONTH-$CURRENT_YEAR"
"**/"
"#include <bits/stdc++.h>"
"using namespace std;"
"#ifndef LANG_DAT"
"#define db(...) ;"
"#endif // LANG_DAT"
"#define int long long"
"#define mp make_pair"
"#define f first"
"#define se second"
"#define pb push_back"
"#define all(v) (v).begin(), (v).end()"
"using pii = pair<int, int>;"
"using vi = vector<int>;",
"#define FOR(i, a, b) for (int (i) = a; (i) <= (b); i++)",
"void mx(int& a, int b) { if (b > a) a = b; }",
"void mi(int& a, int b) { if (b < a) a = b; }",
"#define si(x) (int)(x.size())",
"const int INF = 1e18;",
"const int MOD = 1e9 + 7;",
""
"$1"
""
"bool solve() {"
"	$0"
""
"    return true;"
"}"
""
"int32_t main() {"
"    cin.tie(0)->sync_with_stdio(0);"
"    if (fopen(\"hi.inp\", \"r\")) {"
"        freopen(\"hi.inp\", \"r\", stdin);"
"//        freopen(\"hi.out\", \"w\", stdout);"
"    } "
""
"    int t = 1;"
"    cin >> t;"
"    while (t--) {"
"        cout << (solve() ? \"\\n\" : \"-1\\n\");"
"    }"
""
"}"
		]
	}
}

template<typename T, typename V>
std::ostream& operator << (std::ostream& os, const std::pair<T, V> p) {
   os << "[" << p.first << ": " << p.second << "]";
   return os;
}

template<typename T, template<class, class...> class C, class... Args>
std::ostream& operator << (std::ostream& os, const C<T, Args...>& obj) {
  os << "{ ";
  for (auto const val : obj)
      os << val << " ";
  os << "}";
  return os;
}

void db_out() {
   std::cerr << "\b\b)\n";
}
template<typename Head, typename... Tail>
void db_out(Head H, Tail... T) {
   std::cerr << H << ", ";
   db_out(T...);
}
#define db(...) std::cerr << "(" << #__VA_ARGS__  << ") : (", db_out(__VA_ARGS__);
void db_out_2() {
    std::cout << "\b\b)\n";
}
template<typename Head, typename... Tail>
void db_out_2(Head H, Tail... T) {
    std::cout << H << ", ";
    db_out_2(T...);
}
#define db2(...) std::cout << "(" << #__VA_ARGS__  << ") : (", db_out_2(__VA_ARGS__);
