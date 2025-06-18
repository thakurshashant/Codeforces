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
 
    vector<int> a(n);
    unordered_map<int, int> freq;
    int maxi = 1;
    for(int i=0;i<n;i++) {
        cin>>a[i];
        ++freq[a[i]];
        maxi = max(maxi , freq[a[i]]);
    }

    int diff = n-maxi;

    int ans =0;
    while(diff > 0){
        ans += 1 + min(diff, maxi);
        diff -=maxi;
        maxi *=2;
        
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