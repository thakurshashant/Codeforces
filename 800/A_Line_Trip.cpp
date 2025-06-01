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
        int n, x;
        cin>> n>>x;

        vector<int> a(n);

        for(int i=0;i<n;i++){
            cin>> a[i]; 
        }
        

        int ans = a[0]-0;
        for(int i=1;i<n;i++){
            ans = max(ans, abs(a[i]-a[i-1]));
        }

        int diff = abs(a[n-1] - x);
        ans = max(ans, diff*2);
        cout<< ans << endl;
    };

    return 0;
}