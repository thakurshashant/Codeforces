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

#define pii  pair<int, int>
#define ll long long
#define          all(v)              v.begin(), v.end()
#define         rall(v)              v.rbegin(),v.rend()
#define            pb                push_back
#define          sz(a)               (int)a.size()

bool customSort(const pii(a) ,const pii(b)){
    if(a.first == b.first){
        return a.second > b.second;
    }
    return a.first < b.first;
}
 
void solve() {
    int n , p;
    cin>>n >> p;

    vector<int> a(n), b(n);
    vector<pii> v(n);

    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];

    for(int i=0;i<n;i++){
        v[i] = {b[i] , a[i]};
    }

    sort(all(v) , customSort);

    ll ans = p, j = n-1;
    for(int i=0;i<n && i < j;i++){
        int num= v[i].second;
        int val= v[i].first;


        int avail = j-i+1;
        int count = min(avail,num);
        j -= count;
       
        ans += val*count;
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