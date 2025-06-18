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
 
    vector<ll> a(n);

    for(int i=0;i<n;i++) cin>>a[i];

    int count =0;
    bool sorted = true;
    for(int i=n-2;i>=0;i--){
       while(a[i] >= 0 && a[i] >= a[i+1]){
        count++;
        a[i] = a[i]/2;
        if(a[i] == 0 && a[i+1] == 0) {
            sorted = false;
            break;
        }
       }
       if(a[i] == 0 && a[i+1] == 0) {
            sorted = false;
            break;
       }
    }
    if(!sorted) cout<<-1;
    else cout<<count;

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