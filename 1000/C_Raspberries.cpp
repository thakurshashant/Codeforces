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
    int n, k;
    cin>>n >> k;
    
    int ans = INT_MAX, even =0;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];

        if(a[i]%k == 0) ans= 0;
        else ans = min(ans, k- (a[i]%k));

        if(!(a[i]&1)) even++;
        
    }

    if(ans == 0) cout<<0;
    else if(k == 2) cout<<1;
    else if(k == 4){
        if(even >= 2) cout<<0;
        else cout<<min(ans, 2-even);
    }
    else cout<<ans;

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