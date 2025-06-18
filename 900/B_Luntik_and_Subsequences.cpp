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
    ll sum =0, ones =0, zeros =0;

    for(int i=0;i<n;i++) {
        cin>>a[i];
        sum += a[i];
        if(a[i] == 1) ones++;
        else if(a[i] == 0) zeros++;
    }

    if(ones <= 0){
        cout<<0;
    }
    else{
        ll ans = 0;
        ans = pow(2, zeros);
        if(ones-1 > 0 )ans *= ones;
        cout<<ans;
    }
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