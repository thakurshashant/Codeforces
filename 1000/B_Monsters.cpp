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



void solve() {
    int n, k;
    cin >> n >> k;

    vector<pii> v(n);
    for(int i=0;i<n;i++) {
        int x;
        cin>>x;
        if(x%k == 0) v[i] = {k, i};
        else v[i] = {x%k , i};
    }

    sort(all(v), customsort);

    for(int i=0;i<n;i++){
        cout<<v[i].second+1<<" ";
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