#include<iostream>
#include<set>
#include<map>
#include<string>
#include<unordered_map>
#include<unordered_set>
#include<queue>
#include<stack>
#include<bitset>
#include<list>
#include<utility>
#include<vector>
#include<algorithm>
#include<cmath>
#include<limits.h>
#include <numeric>

using namespace std;
 
#define ll long long
 
#define          all(v)              v.begin(), v.end()
#define         rall(v)              v.rbegin(),v.rend()
 
#define            pb                push_back
#define          sz(a)               (int)a.size()
 
void solve() {
    int n, res = 0;
    	cin >> n;
    	for (int i = 1; i <= n; i++) {
    		int x; cin >> x;
    		res = __gcd(res, abs(x - i));
    	}
    	cout << res << "\n";
}
  
 
 
int32_t main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t ;
    cin >> t;
    while(t--) {
        solve();
    }
}