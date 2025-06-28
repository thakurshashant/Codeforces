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
    cin>>n;

    string s;
    cin>>s;

    vector<int> left(n, 0), right(n, 0);

    unordered_map<char ,int> l, r;
    for(int i=0;i<n;i++){
        if(i == 0) {
            l[s[i]] =1;
            left[0] = 1;
        }
        else{
            if(l.find(s[i]) != l.end()) left[i] = left[i-1];
            else {
                l[s[i]]++;
                left[i] = left[i-1]+1;
            }
        }
    }
    for(int i=n-1;i>=0;i--){
        if(i == n-1) {
            r[s[i]] =1;
            right[n-1] = 1;
        }
        else{
            if(r.find(s[i]) != r.end()) right[i] = right[i+1];
            else {
                r[s[i]]++;
                right[i] =right[i+1]+1;
            }
        }
    }

    int ans =0;
    for(int i=1;i<n;i++){
        ans = max(ans, left[i-1] +right[i]);
    }

    cout<<ans<<endl;
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