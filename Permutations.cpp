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
#define      NO          cout << "NO SOLUTION" << '\n'
#define      YES         cout << "YES" << '\n'
#define      CASE(i)     cout << "TESTCASE #" << i << endl
template<typename T>
void debug(T x) {
    cerr << "debug :" << x << endl;
}
 
void solve() {
    int n;
    cin >> n;
    if(n == 1) {cout << 1 << endl; return ;}
    if(n < 4) {
        NO;
        return ;
    }
    for(int i = 1; i <= n; i++) {
        if(i % 2 == 0) {
            cout << i << " ";
        }
    }
    for(int i = 1; i <= n; i++) {
        if(i % 2 != 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}
 
int32_t main() {
    fast;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t = 1;
    // cin >> t;
    // int p = 1;
    while(t--) {
        // CASE(p++);
        solve();
    }
