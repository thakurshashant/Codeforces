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
    ll n, k , b;
    ll s;
    cin >> n >> k>> b>> s;

    ll d = b%n;

    vector<ll> a(n, 0);
    a[0] = 1ll* b*k;
    s -= a[0];


    if(s < 0){
        cout<<-1<<endl;
        return ;
    }
    else{
        for(int i=0;i<n;i++){
            a[i] += min(k-1, s);
            s-=k-1;
            if(s <= 0) break;
        }
        if(s > 0){
            cout<<-1<<endl;
            return ;
        }
        for(int i=0;i<n;i++) cout<<a[i]<<" ";
    }

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