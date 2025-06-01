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
        int t = n-1;

        vector<int> a(n);

        int sum =0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum += a[i];
        }

        if(n == 2 || (sum % 2 == 0 && sum %t == 0)) cout<<"Yes";
        else cout<<"No";
        cout << "\n";

    };

    return 0;
}