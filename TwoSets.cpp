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
void debug(T x, T y) {
    cerr << "debug :" << x << ":" << y << endl;
}
 
bool is_prime(int n) {
    for(int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) return false;
    }
    return true;
}
void solve() {
    int n;
    cin >> n;
    if((n * (n + 1) / 2) % 2 != 0) {
        NO;
        return ;
    }
    YES;
    vector<int> a;
    vector<int> b;
    if(n % 2 == 0) {
        for(int i = 0; i < n / 2; i++) {
            if(i % 2 == 0) {
                a.push_back(i + 1);
                a.push_back(n - i);
            }
            else {
                b.push_back(i + 1);
                b.push_back(n - i);
            }
        }
    } 
    else {
        for(int i = 0; i < (n - 1) / 2; i++) {
            if(i % 2 == 0) {
                a.push_back(i + 1);
                a.push_back(n - i - 1);
            }
            else {
                b.push_back(i + 1);
                b.push_back(n - i - 1);
            }
        }
        if(a.size() < b.size()) a.push_back(n);
        else b.push_back(n);
    }
    cout << a.size() << endl;
    for(auto x: a) {
        cout << x << " ";
    } cout << endl;
    cout << b.size() << endl;
    for(auto x: b) {
        cout << x << " ";
    } cout << endl;
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
