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
	ll n, x;
	cin>>n>>x;
	
	vector<ll> a(n);
	for(int i=0;i<n;i++) cin>>a[i];
	
	ll mini = 0, maxi =0;
	for(int i=0;i<n;i++){
	    mini += a[i];
	    maxi += (a[i]+x-1)/x;
	}
	mini = (mini+x-1)/x;
	cout<<mini<<" "<<maxi;
    cout<<endl;
}

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t = 1;
	cin >> t;
	while(t--) {
		solve();
	}
}