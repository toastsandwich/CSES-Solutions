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

void solve(){
	int n;
	cin >> n;
	vector<string> gray_code;
	gray_code.push_back("");
	for(int i = 0 ; i < n; i++) {
		int size = gray_code.size();
		for(int j = size - 1; j >= 0; j--) {
			gray_code.push_back(gray_code[j]);
		}
		size =  2 * size;
		for(int j = 0; j < size; j++) {
			if(j < size / 2) {
				gray_code[j].push_back('0');
			}
			else {
				gray_code[j].push_back('1');
			}
		}
	}
	
	for(auto x: gray_code) {
		cout << x << endl;
	}
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
