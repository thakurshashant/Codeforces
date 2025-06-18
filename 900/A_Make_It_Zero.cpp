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


// using ll = long long ;
// using tu = tuple <int, int, int> ;
// using pa = pair <int, int>;


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        vector<int> x(n);
        for(int i=0; i<n; i++){
            cin >> x[i];
        }

        if(n&1){
            cout<<4<<endl;
            cout<<1 << " " << 2<<endl;
            cout<<1 << " " << 2<<endl;
            cout<<2 << " " << n<<endl;
            cout<<2 << " " << n<<endl;
        }
        else{
            cout<<2<<endl;
        cout<<1 << " " << n<<endl;
        cout<<1 << " " << n;
        }
        cout<<endl;
    }

    return 0;
}
