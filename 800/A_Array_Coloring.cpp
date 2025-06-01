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
typedef tuple <int, int, int> t;
typedef pair<int, int> p;
typedef vector<int> v;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int sum =0;

        vector<int> a(n);

        for(int i=0;i<n;i++){
            cin >> a[i];
            sum += a[i];
        }
        if(sum&1) cout<<"NO";
        else cout<<"YES";
        cout<<endl;
    }

    return 0;
}
