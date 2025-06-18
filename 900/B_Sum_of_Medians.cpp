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
	ll n, k;
	cin>>n>>k;
	
	ll size = n*k;
	
	vector<ll> a(size);
	for(int i=0;i<size;i++) cin>>a[i];
	
	ll ans =0;
	int pick = n/2, i = size-1, count =0;
	while(k > 0 && i >= 0){
	    if(count == pick) {
	        ans += a[i];
	        k--;
	        count =0;
	    }
	    else count++;
	    i--;
	}
	cout<<ans;
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