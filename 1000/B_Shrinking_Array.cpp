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
 
#define pii pair<int, int>
#define tup tuple<int, int, int>
#define ll long long
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



void solve() {
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    for(int i=0;i<n-1;i++){
        if(abs(v[i] - v[i+1]) <= 1){
            cout<<0<<endl;
            return ;
        }
    }

    for(int i=0;i<n-2;i++){
        if(v[i] >= min(v[i+2] , v[i+1]) && v[i] <= max(v[i+1] , v[i+2])){
            cout<<1<<endl;
            return ;
        }
        if(v[i+2] >= min(v[i], v[i+1]) && v[i+2] <= max(v[i] , v[i+1])){
            cout<<1<<endl;
            return ;
        }
    }
    cout<<-1<<endl;
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