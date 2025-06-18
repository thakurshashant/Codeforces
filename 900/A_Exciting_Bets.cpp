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
    ll a, b;
    cin>>a>>b;
    
    if(a == b) cout<<0<<" "<<0;
    else{
        ll diff = abs(a-b);
        ll moves = a%diff;
        if(diff-moves >=0 ) moves = min(moves , diff-moves);
        
        ll m = b%diff;
        if(diff-m >=0 ) m = min(m, diff-m);
            
        cout<<diff<<" "<<min(m, moves);
        
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