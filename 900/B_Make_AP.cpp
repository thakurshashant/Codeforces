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
 
#define  all(v)  v.begin(), v.end()
#define  rall(v) v.rbegin(),v.rend()
 
#define  pb    push_back
#define sz(a)  (int)a.size()
 
void solve() {
    int a, b,c;
    cin>>a>>b>>c;
    
    int new_a = b -(c-b);
    if(new_a >= a && new_a != 0 && new_a % a == 0){
        cout<<"YES"<<endl;
        return ;
    }
    
    int new_b = a+(c-a)/2;
    if(new_b >= b && new_b != 0 && new_b % b == 0 && (c-a)%2 ==0){
        cout<<"YES"<<endl;
        return ;
    }
    int new_c = b + (b-a);
    if(new_c >= c && new_c != 0 && new_c % c == 0){
        cout<<"YES"<<endl;
        return ;
    }
    cout<<"NO"<<endl;
    
}

  
 
 
int32_t main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t ;
    cin >> t;
    while(t--) {
        solve();
    }
}