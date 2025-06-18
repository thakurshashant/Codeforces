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
 
#define  all(v)  v.begin(), v.end()
#define  rall(v) v.rbegin(),v.rend()
 
#define  pb    push_back
#define sz(a)  (int)a.size()
 
void solve() {
    ll x, n;
    cin >> x>>n;
    
    ll k = n/4;
    
    if(x&1){
        if(n%4 ==0) cout<<x;
        else if(n%4 ==1) cout<<x + 4*k+1;
        else if(n%4 == 2) cout<<x-1;
        else cout<< x-4*(k+1); 
    }
    else{
        if(n%4 ==0) cout<<x;
        else if(n%4 ==1) cout<<x-(4*k+1);
        else if(n%4 == 2) cout<<x+1;
        else cout<<x + 4*(k+1);
    }

    
    cout<<endl;
}

 
int32_t main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t ;
    cin >> t;
    while(t--) {
        solve();
    }
}