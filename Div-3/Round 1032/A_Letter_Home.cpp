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
    int n, s;
    cin>>n>>s;

    vector<int> a(n);

    int mini = INT_MAX, maxi = INT_MIN;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mini = min(mini, a[i]);
        maxi = max(maxi, a[i]);
    }

    int ans =0;
    if(mini < s && s < maxi){
        int x = min(abs(s-mini) , abs(s-maxi));
        ans = x+ abs(s-mini) + abs(s-maxi);
    }
    else if(s <= mini){
        ans = abs(s-maxi);
    }
    else ans = abs(s-mini);

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