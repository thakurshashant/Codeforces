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


// typedef long long ll;
// typedef tuple <int, int, int> t;
// typedef pair<int, int> p;
// typedef vector<int> v;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];

        bool check = true;
        int diff =INT_MAX;

        for(int i=1;i< n;i++){
            if(a[i] < a[i-1]) check = false;
            diff = min(diff, a[i] - a[i-1]);
        }

        if(check){
            cout<<diff/2 +1;
        }
        else cout<<0;
        cout<<endl;
    }

    return 0;
}
