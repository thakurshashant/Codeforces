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
        cin>>n>>k;
        vector<int> a(n);
 
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
 
        sort(a.begin(), a.end());
 
        int ans = 1, temp =1;
        for(int i =1;i<n;i++){
            if(abs(a[i] -a[i-1]) <= k){
                temp++;
            }
            else {
                ans = max(ans, temp);
                temp =1;
            }
        }
 
        ans = max(ans, temp);
 
        cout<<n-ans<<endl;
}   
 
int32_t main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
}