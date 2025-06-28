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

#define           ll long long
#define           pii pair<int, int>
#define           pll pair<ll , ll>
#define           tup tuple<int, int, int>
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
    cin >> n;
    int a = 1;
    for (int g = 2; g * g <= n; ++g) {
      if (n % g == 0) {
        a = n / g;
        break;
      }
    }
    cout << a << ' ' << n - a << '\n';
    return ;
}


int32_t main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
}