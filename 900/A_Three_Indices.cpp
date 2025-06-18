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
    
    vector<int> a(n);
    
    for(int i=0;i<n;i++) cin>>a[i];
    
    bool ans = false;
    for(int i=0;i<n;i++){
        int j = i+1;
        bool forw = false , back = false;
        int f, p;
        for(;j<n;j++){
            if(a[i] > a[j]){
                forw = true;
                f=j;
                break;
            }
        }
        
        int x;
        for(x=i-1; x >= 0; x--){
            if(a[x] < a[i]){
                back = true;
                p =x;
                break;
            }
        }
        
        if(forw && back) {
            cout<<"YES"<<endl;
            cout<<p+1<<" "<<i+1<<" "<<f+1;
            ans = true;
            break;
            
        }
        
    }
    if(ans == false) cout << "NO";
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