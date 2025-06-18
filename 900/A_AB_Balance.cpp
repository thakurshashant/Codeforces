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
    string s;
    cin>>s;

    int ab = 0, ba = 0;
    for (int i = 0; i + 1 < s.length(); ++i) {
        if (s[i] == 'a' && s[i+1] == 'b') ab++;
        if (s[i] == 'b' && s[i+1] == 'a') ba++;
    }

    if (ab == ba) {
        cout << s << "\n";
    } else {
        s[0] = s.back();
        cout << s << "\n";
    }
}

 
int32_t main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t ;
    cin >> t;
    while(t--) {
        solve();
    }
}