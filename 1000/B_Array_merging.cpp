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
 
#define           pii pair<int, int>
#define           tup tuple<int, int, int>
#define           ll long long
#define          all(v)              v.begin(), v.end()
#define         rall(v)              v.rbegin(),v.rend()
#define            pb                push_back
#define          sz(a)               (int)a.size()
 

/*  Comparatore Function for Priority Queue <max , min> */
class comp {
public:
    bool operator()(const pii &a, const pii &b) {
        if (a.first == b.first) return a.second > b.second;
        return a.first < b.first;
    }
};

/* Custom sort */

bool customsort(const pii &a, const pii &b){
    if(a.first == b.first) return a.second < b.second;
    return a.first > b.first;
}



void solve() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);

    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    unordered_map<int, int> mp, p;
    int len = 1;

    for(int i = 1; i < n; i++) {
        if(a[i] == a[i - 1]) len++;
        else{
            mp[a[i - 1]] = max(mp[a[i - 1]], len);
            len = 1;
        }
    }
    mp[a[n - 1]] = max(mp[a[n - 1]], len);
    len = 1;

    for(int j = 1; j < n; j++) {
        if(b[j] == b[j - 1]) len++;
        else {
            p[b[j - 1]] = max(p[b[j - 1]], len);
            len = 1;
        }
    }
    p[b[n - 1]] = max(p[b[n - 1]], len);

    int ans = 1;
    for(auto &[val, count] : mp) ans = max(ans, count + p[val]);
    for(auto &[val, count] : p) ans = max(ans, count + mp[val]);

    cout << ans << "\n";
}


int32_t main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
}