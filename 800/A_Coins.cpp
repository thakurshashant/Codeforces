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


typedef long long ll;
// typedef tuple <int, int, int> t;
// typedef pair<int, int> p;
// typedef vector<int> v;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){
        ll n, k;
        cin >> n >>k;
        
        if(n %2 == 0 || n % k ==0) cout <<"YES";
        else {
            if( (n-k )% 2 == 0  || (n-2)    % k == 0) cout<<"YES";
            else cout<<"NO";
        }

        cout<<endl;
    }

    return 0;
}
