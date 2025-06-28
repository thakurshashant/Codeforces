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
    int n;
    char c;
    cin>>n >> c;

    string s;
    cin>>s;

    if(n == 1){
        cout<<0<<endl;
        return ;
    }

    vector<int> next_g(n, 0);
    
    int j =0;
    while(j < n && s[j] != 'g') j++;
    next_g[0] = j;

    int count = next_g[0];
    for(int i=n-1;i >= 0;i--){
        if(s[i] == 'g') count = 0;
        else count++;
        next_g[i] = count;
        
    }
 

    int ans =0;
    for(int i=0;i<n;i++){
        if(s[i] == c){
            ans = max(ans, next_g[i]);
        }
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