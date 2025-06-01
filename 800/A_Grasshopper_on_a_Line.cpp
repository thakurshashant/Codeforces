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
        int k,x;
        cin >> x >> k;

        if(x%k){
            cout<<1<<endl;
            cout<<x<<endl;
        }
        else{
            cout<<2<<endl;
            cout<<x-1<<" "<<1<<endl;
        }
    }

    return 0;
}
