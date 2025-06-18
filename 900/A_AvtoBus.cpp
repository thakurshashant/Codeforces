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
using namespace std;
 
#define ll long long
 
#define          all(v)              v.begin(), v.end()
#define         rall(v)              v.rbegin(),v.rend()
 
#define            pb                push_back
#define          sz(a)               (int)a.size()
 
void solve() {
    ll n;
    cin >> n;
 
    if (n < 4 || n % 2 != 0) {
        cout << -1 << endl;
        return;
    }
 
    ll mini = (n + 5) / 6; // Equivalent to ceil(n / 6)
    ll maxi = n / 4;       // Equivalent to floor(n / 4)
 
    cout << mini << " " << maxi << endl;

}   
 
int32_t main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
}