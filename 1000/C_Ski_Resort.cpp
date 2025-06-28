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
 
#define           pii pair<int, int>
#define           tup tuple<int, int, int>
#define           ll long long
#define          all(v)              v.begin(), v.end()
#define         rall(v)              v.rbegin(),v.rend()
#define            pb                push_back
#define          sz(a)               (int)a.size()

const int maxx = 1e5;
const int mod = 1e9+7;
 

/*  Comparatore Function for Priority Queue <max , min> */
class comp {
public:
    bool operator()(const pii &a, const pii &b) {
        if (a.first == b.first) return a.second > b.second;
        return a.first < b.first;
    }
};

/* Custom sort */
bool customsort(const pii &a, const pii &b){
    if(a.first == b.first) return a.second < b.second;
    return a.first > b.first;
}


/* Factorial of a number */
vector<ll> fact(maxx+1, 1);
void precompute(){
    for(int i=1;i<=maxx;i++){
        fact[i] = fact[i-1]*i;
    }
}
ll factorial(int n){
    return fact[n];
}



void solve() {
    int n, k , q;
    cin >> n >> k >> q;
    vector<int> a(n);

    bool possible = false;
    for(int i=0;i<n;i++) {
        cin>>a[i];
        if(a[i] <= q) possible = true;
    }

    if(!possible){
        cout<<0<<endl;
        return ;
    }

    int l=0, r=0;
    ll ans =0;
    while(r < n){
        int count =0;
        while(r <n && a[r] <= q ){
            count++;
            r++;
        }
        if(count >= k) {
            int num = r-l;
            ans += (1ll * (count-k+1)*(count-k+2))/2;
        }
        r++;
        l=r;
    }
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