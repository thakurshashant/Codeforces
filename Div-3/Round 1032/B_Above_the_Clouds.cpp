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
    int n;
    cin>>n;

    string s;
    cin>>s;

    unordered_map<char, int> mp1;
    unordered_map<char, int> mp2;
    

    for(int i=0;i<n-1;i++){
        char c = s[i];
        mp1[c]++;

        if(mp1[c] >= 2){
            cout<<"Yes"<<endl;
            return ;
        }
    }
    for(int i=n-1;i> 0;i--){
        char c = s[i];
        mp2[c]++;

        if(mp2[c] >= 2){
            cout<<"Yes"<<endl;
            return ;
        }
    }
    cout<<"No";

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