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
        int n, b, a;
        cin >> a >> b >> n;

        vector<int> x(n);

        for(int i=0;i<n;i++){
            cin >> x[i];
        }

        long long ans =0;

        for(int i=0;i<n;i++){
            if(x[i] + b > a){
                ans += b-1;
                b = min(1+x[i], a);
            } 
            else if(x[i] + b < a){
                b += x[i];
            }
            else if(x[i] + b == a){
                ans += a-1;
                b =1;
            }
            
        }
        ans += b;
        cout<<ans;
        cout<<endl;
    }

    return 0;
}
