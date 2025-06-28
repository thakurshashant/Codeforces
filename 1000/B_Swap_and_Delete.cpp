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

    int zero =0, one =0, n = s.length();

    for(auto c:s){
        if(c == '0') zero++;
        else one++;
    }

    if(one == zero) cout<<0;
    else if(one > zero){
        int i =0;
        while(i < n){
            if(s[i] == '1'){
                if(zero == 0) {
                    cout<<n-i<<endl;
                    return ;
                }
                zero--;
            } 
            i++;
        }
        cout<<n-i;
        
    }
    else{
        int i =0;
        while(i < n){
            if(s[i] == '0'){
                if(one == 0){
                    cout<<n-i<<endl;
                    return ;
                }
                one--;
            }
            i++;
            
        }
        cout<<n-i;
        
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