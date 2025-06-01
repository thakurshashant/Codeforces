#include<iostream>
#include<vector>
using namespace std;

typedef long long ll;

ll ans(ll x){
    ll count =0;

    while(x >1){
        x = (x+1)/2;
        count++;
    }
    return count;
}

void solve(){
    ll n, m, r, c;
    cin>> n>> m>> r>> c;

    // since the grid is symmetric , we want to put the Monster in first quadrant
    if(r > n-r+1) r = n - r + 1;
    if(c >m-c+1) c = m-c+1;

    cout<<min(1+ ans(c) + ans(n) , 1 + ans(r) + ans(m));
    cout<<endl;

}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}