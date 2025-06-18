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
    int n;
    cin>>n;
 
    int maxi = -1 , mini = INT_MAX;
 
    vector<int> a(n);
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
 
    int ans = a[n-1]-a[0];
    for(int i=1;i<n;i++){
        ans = max(ans , a[i] - a[0]);
    }
 
    for(int i=0;i<n-1;i++){
        ans = max(ans, a[n-1]-a[i]);
    }
    
    for(int i=0;i<n;i++){
        ans = max(ans, a[(i-1+n)%n] - a[i]);
    }
 
    
    cout<<ans;
    cout<<endl;
}   
 
int32_t main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
}