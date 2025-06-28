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
#include<climits>
using namespace std;
 
#define ll long long
#define          all(v)              v.begin(), v.end()
#define         rall(v)              v.rbegin(),v.rend()
#define            pb                push_back
#define          sz(a)               (int)a.size()
 
void solve() {
    int n;
    cin>> n;

    vector<vector<int> > v(n);
    int i=0, mini =INT_MAX, x =n;
    while(x--){
        int m;
        cin>>m;

        vector<int> temp(m);
        for(int j=0;j<m;j++) cin>>temp[j];
        sort(all(temp));

        if(temp[0] < mini){
            mini =temp[0];
        }
        v[i++] = temp;
    }

    ll ans = mini;
    vector<int> second_max;
    
    for(int j=0;j<n;j++){
        second_max.push_back(v[j][1]);
    }
    sort(rall(second_max));
    for(int j=0;j<n-1;j++) ans += second_max[j];
    cout<<ans<<endl;

}   
 
int32_t main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
}