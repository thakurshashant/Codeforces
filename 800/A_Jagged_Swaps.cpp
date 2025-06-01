typedef long long ll;

#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin>> n;
        vector<ll> a(n);

        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        if(a[0] == 1) cout<<"YES";
        else cout<<"NO";
        cout << "\n";
    };

    return 0;
}