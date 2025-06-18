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
    string s;
    cin>>s;

    int i=0;
        string sub1 = "01", sub2 = "10";

        while(s.size() >= 2 && (s.find(sub1) != string::npos || s.find(sub2) != string::npos)){
            if(s.find(sub1) != string::npos){
                int idx = s.find(sub1);
                s.erase(idx , 2);
            }
            else if(s.find(sub2) != string::npos){
                int idx = s.find(sub2);
                s.erase(idx , 2);
            }
            i++;
        }
        if(i&1) cout<<"DA";
        else cout<<"NET";
        
    
 
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