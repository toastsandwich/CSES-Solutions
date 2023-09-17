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
    int n, m;
    cin >> n >> m;
    int maxa = max(n, m);
    if(n == 1 and m == 1){
        cout << 1 << endl;
        return ;
    }
    if(n == 1 and m == 2) {
        cout << 2 << endl;
        return ;
    }
    if(n == 2 and m == 1) {
        cout << 4 << endl;
        return ;
    }
    if(n == 2 and m == 2) {
        cout << 3 << endl;
        return ;
    }
    bool odd = maxa % 2 ? 1 : 0; 
    int val = maxa * (maxa - 1) + 1;
    bool where = n > m ? true : false;
    if(where and odd) {
        cout << val - (abs(n - m));
    } 
    if(where and !odd) {
        cout << val + (abs(n - m));
    }
    if(!where and odd) {
        cout << val + (abs(n - m));
    }
    if(!where and !odd) {
        cout << val - (abs(n - m));
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
    cin >> t;
    // int p = 1;
    while(t--) {
        // CASE(p++);
        solve();
    }
}
