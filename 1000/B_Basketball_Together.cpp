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
    ll n, d;
    cin>>n>>d;

    vector<ll> a(n);
    ll count =0, size = n;
    bool possible = false;
    for(int i=0;i<n;i++) cin>>a[i];

    sort(a.rbegin(), a.rend());

    for(int i=0;i<n;i++){
        ll di = d/a[i];
        if(size - (di+1) >= 0){
            count++;
            size -= (di+1);
        }
        else break;
    }

    cout<<count;
    cout<<endl;
}


int32_t main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    // cin >> t;
    while(t--) {
        solve();
    }
}