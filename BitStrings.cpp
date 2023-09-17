using namespace std;
// using namespace boost::multiprecision;
// using namespace boost::algorithm;
 
// #include <boost/multiprecision/cpp_int.hpp>
// #include <boost/algorithm/string.hpp>
#include <bits/stdc++.h>
#define      int         long long int
//#define    bigInt      cpp_int
#define      endl        "\n"
#define      fast        ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define      all(x)      x.begin(),x.end()
#define      NO          cout << "NO" << '\n'
#define      YES         cout << "YES" << '\n'
#define      CASE(i)     cout << "TESTCASE #" << i << endl
template<typename T>
void debug(T x) {
    cerr << "debug :" << x << endl;
}
void solve() {
    int n;
    cin >> n;
    int mod = 1e9 + 7;
	int cnt = 1;
	for(int i = 1; i <= n; i++) {
		//cnt = 2 * cnt;
		cnt = (2 * cnt) % mod;
	}
	cout << cnt << endl;
}
 
int32_t main() {
    fast;
    int t = 1;
    // cin >> t;
    // int p = 1;
    while(t--) {
        // CASE(p++);
        solve();
    }
}
