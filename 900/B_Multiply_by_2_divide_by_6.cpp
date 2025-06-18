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

    int two =0 , three =0;

    while(n > 0 && n != 1 && n%2 == 0){
        n = n/2;
        two++;
    }

    while(n > 0 && n != 1 && n %3 ==0 ){
        n=n/3;
        three++;
    }
    if(two > three) cout<<-1;
    else if(n == 1) {
        cout<<2*three - two;
    }
    else cout<<-1;

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