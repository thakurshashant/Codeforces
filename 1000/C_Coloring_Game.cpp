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
 
#define pii pair<int, int>
#define tup tuple<int, int, int>
#define ll long long
#define          all(v)              v.begin(), v.end()
#define         rall(v)              v.rbegin(),v.rend()
#define            pb                push_back
#define          sz(a)               (int)a.size()


void solve() {
    int n;
    cin >> n;
    vector<ll> v(n);
    for (auto &x : v) cin >> x;
    sort(v.begin(), v.end());

    ll total = 0;

    for (int i = 0; i < n - 2; ++i) {
        for (int j = i + 1; j < n - 1; ++j) {
            ll sum = v[i] + v[j];

            // m1: first index such that v[i] + v[j] + v[k] > v[n-1]
            int l = j + 1, r = n - 1, m1 = n;
            while (l <= r) {
                int mid = (l + r) / 2;
                if (sum + v[mid] > v[n - 1]) {
                    m1 = mid;
                    r = mid - 1;
                } else {
                    l = mid + 1;
                }
            }

            // m2: last index such that v[k] < v[i] + v[j] ( why because, if there are only 3 element , then the sum of 1+2 > 3 is possible and this case is getting lost)
            l = j + 1, r = n - 1;
            int m2 = j;
            while (l <= r) {
                int mid = (l + r) / 2;
                if (v[mid] < sum) {
                    m2 = mid;
                    l = mid + 1;
                } else {
                    r = mid - 1;
                }
            }

            if (m1 <= m2) {
                total += (m2 - m1 + 1);
            }
        }
    }

    cout << total << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t;
    cin >> t;
    while (t--) solve();
}
