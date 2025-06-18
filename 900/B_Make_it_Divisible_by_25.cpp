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
 

int operations(string& s, char a, char b){
    int n = s.length();

    int count =0;
    for(int i=n-1;i>=0;i--){
        if(s[i] == a){
            int j;
            for(j=i-1;j>=0;j--){
                if(s[j] == b){
                    return n-j-2; 
                }
            }
        }
    }
    return n;
}


void solve() {
    ll num;
    cin>>num;
    
    string s = to_string(num);
    int ans = s.size();

    ans = min(operations(s,'0', '0') , ans);
    ans= min(operations(s, '5' , '2'), ans);
    ans = min(operations(s, '0' , '5'), ans);
    ans  = min(operations(s, '5' , '7'), ans);
    
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