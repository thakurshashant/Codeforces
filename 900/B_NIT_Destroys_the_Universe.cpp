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
 
    for(int i=0;i<n;i++) cin>>a[i];
 
    int ans =0, temp=0;
    for(int i=0;i<n;i++){
        if(a[i]== 0){
            ans += (temp > 0 )? 1:0;
            temp =0;
        }
        else temp++;
    }
    ans += (temp>0) ? 1:0;
 
    if(ans <= 1) cout<<ans;
    else if(ans >= 2) cout<<2;
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