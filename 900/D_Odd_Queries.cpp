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
    int n, q;
    cin>> n >> q;

    vector<int> a(n);

    for(int i=0;i<n;i++) cin>>a[i];
    vector<int> prefix_sum(n+1, 0);

    int total =0;
    for(int i=0;i<n;i++){
        prefix_sum[i+1] = a[i]+prefix_sum[i];
        total += a[i];
    }
    

    while(q--){
        int l, r, k;
        cin >> l>>r>>k;

        int diff = prefix_sum[r]-prefix_sum[l-1];
        int temp = total - diff;
        temp += (r-l+1)*k;
        if(temp&1) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }

}
  
 
 
int32_t main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t ;
    cin >> t;
    while(t--) {
        solve();
    }
}